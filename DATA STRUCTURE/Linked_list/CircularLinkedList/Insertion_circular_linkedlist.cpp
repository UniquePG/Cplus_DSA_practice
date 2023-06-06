#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *head) // TC of Traversal is -> O(n)
{
    struct Node *ptr = head;

    do
    {
         cout << "Element is: " << ptr->data << endl;
        ptr = ptr->next;

    } while (ptr != head);
}

// Insert a Node at the head of the Circular linked list

struct Node* InsertAtHead(struct Node* head, int data){

    struct Node* ptr = head->next;
    struct Node* NewNode = (struct Node*) malloc(sizeof(struct Node));
    NewNode->data = data;


    while(ptr->next != head){
        ptr = ptr->next;

    }   // At this point ptr point to the last Node of the circular linked list

    ptr->next = NewNode;
    NewNode->next = head;
    

    return NewNode;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    // Structure of every node
    // Allocate the memory for nodes in the linkedlist in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Link nodes to eachother

    // link Head to second
    head->data = 10;
    head->next = second;
    // link second to third
    second->data = 20;
    second->next = third;
    // link third to fourth
    third->data = 30;
    third->next = fourth;
    // link fourth to fifth
    fourth->data = 40;
    fourth->next = fifth;
    // Fifth point to NULL
    fifth->data = 50;
    fifth->next = head;

    // Linked list before insertion
    cout<<"Circular Linked list before Insertion"<<endl;
    linkedlistTraversal(head);
    head = InsertAtHead(head, 35);
    // Linked list After insertion
    cout<<"Circular Linked List After Insertion"<<endl;
    linkedlistTraversal(head);

    return 0;
}