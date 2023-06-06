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

// Inorder Traversal
void InorderTraversal(struct Node* root){

    if(root != NULL){
        InorderTraversal(root->left);
        cout<< root->data<<" ";
        InorderTraversal(root->right);
    }

}

// To find inorderpredecesor
struct Node* InorderPredecessor(struct Node* root){
    root = root->left;

    while(root->right != NULL){
        root = root->right;
    }
    return root;
}
// Deletion in BST
struct Node* DeletionInBST(struct Node* root, int value){
    struct Node* ipre;

    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    // Search for the node to be deleted
    if(value < root->data){
        root->left = DeletionInBST(root->left, value);
    }  
    else if(value > root->data){
        root->right = DeletionInBST(root->right, value);
    } 
    // Deletion Strategy when the node is found
    else{
        ipre = InorderPredecessor(root);
        root->data = ipre->data;
        root->left = DeletionInBST(root->left, ipre->data);

    }
    return root;
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
    
    cout<<"Inorder Traversal of the BST Before deletion of the node"<<endl;
    InorderTraversal(p);
    cout<<"\n";
    cout<<"Inorder Traversal of the BST After deletion of the node"<<endl;
    DeletionInBST(p, 2);
    InorderTraversal(p);

   
    

    return 0;
}
