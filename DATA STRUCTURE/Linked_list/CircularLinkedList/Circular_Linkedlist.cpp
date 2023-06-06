#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void CircularLinkedListTraversal(struct Node * head){
    struct Node *ptr = head;
/* 
// One methord to traverse cicular linked list (Using while loop)
    cout<<ptr->data<<endl;
    ptr = ptr->next;

    while(ptr != head){
        cout<<ptr->data<<endl;
       ptr = ptr->next;
    }
     */

// Another method to traverse circular linked list (Using do-while loop)

    do{
        cout<<"Element is: " << ptr->data <<endl;
        ptr = ptr->next;
    }while(ptr != head);

}
int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;

    head = (struct Node* ) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));
        
   // Link nodes to eachother

    // link Head to second
    head->data = 23;
    head->next = second;
    // link second to third
    second->data = 65;
    second-> next = third;
    // link third to fourth
    third->data = 38;
    third-> next = fourth;
    // link fourth to fifth
    fourth->data = 42;
    fourth-> next = fifth;
    // Fifth point to NULL
    fifth->data = 57;
    fifth-> next = head;

    CircularLinkedListTraversal(head);


    return 0;
}