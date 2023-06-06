#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node* next;
};

struct Node* InsertionAtIndex(struct Node* head, int data, int index){
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    
    newnode->data = data;
    newnode->next = p->next;
    p->next = newnode;

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

    cout<<"Linked list before insertion a new node at given index"<<endl;
    linkedlistTraversal(head);
    head = InsertionAtIndex(head, 23, 2);
    cout<<"Linked list after insertion a new node at given index"<<endl;
    linkedlistTraversal(head);

    return 0;
}