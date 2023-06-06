#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct noe *right;
    int height;
};

int getHight(struct node *n){
    if(n == NULL)
        return 0;
    return n->height;
}

struct node * Createnode(int data){
    struct node* n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;

    return n;
}

int getBalanceFactor(struct node* n){
    if(n == NULL){
        return 0;
    }
    return getHight(n->left) - getHight(n->right);
}

struct node* RightRotation(struct node* y){
    struct node* x = y->left;
    struct node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHight(y->right), getHight(y->left)) + 1;
    x->height = max(getHight(x->right), getHight(x->left)) + 1;

    return x;

}

struct node* LeftRotation(struct node* x){
    struct node* y = x->right;
    struct node* T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHight(y->right), getHight(y->left)) + 1;
    x->height = max(getHight(x->right), getHight(x->left)) + 1;

    return y;

}

int max(int a, int b){

    return a>b? a : b;
}

struct node* insert(struct node* node, int key){
    if(node == NULL){
        return Createnode(key);
    }

    if(key < node->left)
        node->left = insert(node->left, key);
    else if(key > node->right)
        node->right = insert(node->right, key);
    return node;

    node->height = 1 + max(getHight(node->left), getHight(node->right));
    int bf = getBalanceFactor(node);

    // left left case
    if(bf > 1 && key < node->left->key)
        RightRotation(node);
    // Right right case
    if(bf < -1 && key > node->right->key)
        LeftRotation(node);
    // left right case
    if(bf > 1 && key > node->left->key){
        node->left = LeftRotation(node->left);
        RightRotation(node);
    }
    // right left case
    if(bf < -1 && key > node->right->key){
        node->right = RightRotation(node->right)
        LeftRotation(node);
    }

    return node;

    
}
int main(){
    struct node * root = NULL;
    root = insert(root, 45);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 14);
    root = insert(root, 10);

    
    return 0;