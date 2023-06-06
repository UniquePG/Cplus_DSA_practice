#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node // Structure of Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr) // TC of Traversal is -> O(n)
{

    while (ptr != NULL)
    {
        cout << "Element is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// Delete Node from the linkedList with given node
/* 
struct Node *DeleteNodeAtValue(struct Node *head, struct Node *ptr)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q != ptr)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
}
 */
struct Node *DeleteNodeAtValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data == value){
        p->next = q->next;
        free(q);
    }

    return head;
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
    fifth->next = NULL;

    cout << "Linked List before delete node with given value " << endl;
    linkedlistTraversal(head);

    head = DeleteNodeAtValue(head, 30);
    cout << "Linked List After delete node with given value " << endl;
    linkedlistTraversal(head);

    return 0;
}