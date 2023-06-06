#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

void TraverseDLForward(struct Node *head){

    struct Node* ptr = head;

    while(ptr != NULL){
        cout<< "Element is: " <<ptr->data <<endl;
        ptr = ptr->next;
    }

}

void TraversalDLBackward(struct Node *head){
    struct Node *ptr = head;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    while(ptr != head){
        cout<<"Element is: "<<ptr->data<<endl;
        ptr = ptr->prev;
    }  
    cout << "Element is: "<<ptr->data<<endl;
    
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    // Link the Nodes of the doubly link list

    // Link head node with second
    head->prev = NULL;
    head->data = 22;
    head->next = second;

    // Link second node with third
    second->prev = head;
    second->data = 34;
    second->next = third;

    // Link third node with fourth

    third->prev = second;
    third->data = 46;
    third->next = fourth;

    // Link fourth node 
    fourth->prev = third;
    fourth->data = 58;
    fourth->next = NULL;

    // Traverse Doubly linked list forward
    cout<<"Forward Traversal of the doubly linked list"<<endl;
    TraverseDLForward(head);
    cout<<"Backward Traversal of the doubly linked list"<<endl;
    TraversalDLBackward(head);
    return 0;
}