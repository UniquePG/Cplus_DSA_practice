#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Creating Struct Node
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

//Creating a function for nodes of the tree

struct Node* GenerateNode(int data){
    struct Node* n;     // creation node pointer
    n = (struct Node*) malloc(sizeof(struct Node));     // allocation memory in the heap

    n->data = data;     // setting data in the node
    n->left = NULL;     // setting left and right children to null
    n->right = NULL;    // setting left and right children to null

    return n;

}
int main(){

    // Creating nodes of the tree using function(Recommanded)

    struct Node *p = GenerateNode(21);  // create Root node
    struct Node *p1 = GenerateNode(15);  // create second node
    struct Node *p2 = GenerateNode(11);  // create third node
    struct Node *p3 = GenerateNode(36);  // create fourth node
    struct Node *p4 = GenerateNode(41);  // create fifth node
    struct Node *p5 = GenerateNode(74);  // create sixth node
    struct Node *p6 = GenerateNode(46);  // create seventh node

    // Link the nodes
    p->left = p1;       // left child of root node p
    p->right = p2;      // right child of root node p

    p1->left = p3;      // left child of  node p1
    p1->right = p4;     // right child of root node p1

    p2->left = p5;      // left child of node p2
    p2->right = p6;     // right child of node p2

    // General methord of creating node(Not recommanded)

/*     struct Node *p;     //creating root node
    p = (struct Node* ) malloc(sizeof(struct Node));    

    p->data = 12;
    p->left = NULL;   
    p->right = NULL;


    struct Node *p1;     //creating second node
    p1 = (struct Node* ) malloc(sizeof(struct Node));    

    p1->data = 21;
    p1->left = NULL;   
    p1->right = NULL;


    struct Node *p2;     //creating third node
    p2 = (struct Node* ) malloc(sizeof(struct Node));    

    p2->data = 11;
    p2->left = NULL;   
    p2->right = NULL;

    // Link nodes 
    p->left = p1;
    p->right = p2;
 */

    





    return 0;
}