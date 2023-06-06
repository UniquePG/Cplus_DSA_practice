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

// InOrder Traversal of the Tree
/* void InorderTraversal(struct Node* root){

    if(root != NULL){
        InorderTraversal(root->left);
        cout<< root->data<<" ";
        InorderTraversal(root->right);
    }

}
 */

// Iterative Search in BST
struct Node* SearchIterative(struct Node* root, int key){   
    
    while(root != NULL){
        if(root->data == key)
            return root;
        else if(key < root->data)
            root = root->left;
        else
            root = root->right;
    }

    return NULL;
    
    

}
int main(){

    // Creating nodes of the tree using function(Recommanded)

    struct Node *p = GenerateNode(9);  // create Root node
    struct Node *p1 = GenerateNode(4);  // create second node
    struct Node *p2 = GenerateNode(11);  // create third node
    struct Node *p3 = GenerateNode(2);  // create fourth node
    struct Node *p4 = GenerateNode(7);  // create fifth node
    struct Node *p5 = GenerateNode(15);  // create fifth node


    // Link the nodes (Binart search Tree)
    p->left = p1;       // left child of root node p
    p->right = p2;      // right child of root node p

    p1->left = p3;      // left child of  node p1
    p1->right = p4;     // right child of root node p1

    p2->left = NULL;      // left child of  node p2
    p2->right = p5;     // right child of root node p2
    

    // Inorder Traversal of any BTS Tress gives an ascending sorted Array
/*     cout<<"Inorder Traversal of the Tree...."<<endl;
    InorderTraversal(p);        */ 


    struct Node* n = SearchIterative(p, 15);  // This function gives us struct node type ka pointer
    if(n != NULL)
        cout<< "Found: "<<n->data<<endl;    // print the found element
    else
        cout<<"Element not found";

    return 0;
}
