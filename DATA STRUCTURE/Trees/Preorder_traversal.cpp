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

// PreOrder Traversal of the Tree
void PreorderTraversal(struct Node* root){

    if(root != NULL){
        cout<< root->data<<" ";

        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }

}
int main(){

    // Creating nodes of the tree using function(Recommanded)

    struct Node *p = GenerateNode(4);  // create Root node
    struct Node *p1 = GenerateNode(1);  // create second node
    struct Node *p2 = GenerateNode(6);  // create third node
    struct Node *p3 = GenerateNode(5);  // create fourth node
    struct Node *p4 = GenerateNode(2);  // create fifth node


    // Link the nodes
    p->left = p1;       // left child of root node p
    p->right = p2;      // right child of root node p

    p1->left = p3;      // left child of  node p1
    p1->right = p4;     // right child of root node p1


    cout<<"Preorder Traversal of the Tree...."<<endl;
    PreorderTraversal(p);
    
/*  

                     4
                   /  \
                  1    6
                / \  
               5  2
*/
    return 0;
}
