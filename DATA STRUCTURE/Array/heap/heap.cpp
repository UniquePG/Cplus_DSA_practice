#include<iostream>
using namespace std;

int main(){
    int a =10;      // Stored in stack

    int *p = new int();     // allocate memory in heap

    *p = 10;

    delete(p);          // Deallocate memory

    p = new int[4];      // allocate memory for array of size 4 in heap

    delete[]p;          // deallocate the block of memory of array from the heap

    p = NULL;          // delete the pointer from stack to heap

    return 0;
}   