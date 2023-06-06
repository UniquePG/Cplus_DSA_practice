#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Sum of all nodes of the Tree

struct node{
    int data;
    struct node* left;
    struct node* right;

};

struct node* createnode(int data){
    struct node* p;
    p = (struct node* ) malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;

    return p;
}

// Sum of all nodes using preorder traversal
int TreeSum(struct node * root){
     int sum =0;

    if(root != NULL){

        sum = root->data + TreeSum(root->left) + TreeSum(root->right); 

        // sum += root->data;

        // sum = TreeSum(root->left);
        // sum = TreeSum(root->right); 
    }

    return sum;
    
}
int main(){
    
    struct node * p = createnode(2);
    struct node * p1 = createnode(3);
    struct node * p2 = createnode(7);
    struct node * p3 = createnode(4);
    struct node * p4 = createnode(3);
    struct node * p5 = createnode(1);
    struct node * p6 = createnode(9);

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

   cout<< "The sum of Tree: "<< TreeSum(p);

    return 0;
}