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


// Insert new node in to BST
void insertNode(struct Node* root, int key){
    struct Node* prev;

    while(root != NULL){
        prev = root;
        if(root->data == key){
            cout<<"Can not insert the new node\n";
            return;
        }
        else if(key < root->data)
            root = root->left;
        else    
            root = root->right;
    }

    struct Node* newnode = GenerateNode(key);

    if(prev->data > key)
        prev->left = newnode;
    else    
        prev->right = newnode;


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
    

    insertNode(p, 8);
    cout<<"Insert node is: "<< p->left->right->right->data<<endl;   // print the inserted node


    

    return 0;
}
