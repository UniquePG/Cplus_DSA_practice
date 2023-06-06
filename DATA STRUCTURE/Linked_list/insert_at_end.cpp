#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node     // Structure of Node
{
    int data;
    struct Node * next;
};

// Insert new node at the End of the linked list
struct Node* InsertAtEnd(struct Node* head, int data){
    struct Node* newnode = (struct Node* ) malloc(sizeof(struct Node));
    newnode->data = data;
    struct Node* p = head;

    while(p->next!=NULL){
        p = p->next;
    }

    p->next = newnode;
    newnode->next = NULL;

    return head;
}

void linkedlistTraversal(struct Node* ptr)  // TC of Traversal is -> O(n)
{
        
        while(ptr != NULL){
            cout<<"Element is: "<<ptr->data<<endl;
            ptr = ptr->next;
        }
}
int main(){
     struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
 // Structure of every node
 //Allocate the memory for nodes in the linkedlist in the heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second= (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));

// Link nodes to eachother

    // link Head to second
    head->data = 10;
    head->next = second;
    // link second to third
    second->data = 20;
    second-> next = third;
    // link third to fourth
    third->data = 30;
    third-> next = fourth;
    // link fourth to fifth
    fourth->data = 40;
    fourth-> next = fifth;
    // Fifth point to NULL
    fifth->data = 50;
    fifth-> next = NULL;

    cout<<"Linked list before insertion a new node at the end"<<endl;
    linkedlistTraversal(head);
    head = InsertAtEnd(head, 45);
    cout<<"Linked list after insertion a new node at the end"<<endl;
    linkedlistTraversal(head);
    return 0;
}