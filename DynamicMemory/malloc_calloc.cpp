#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Use of malloc
    int *ptr;
    ptr = (int*) malloc(3*sizeof(int));     // allocate the block of memory from heap and point memory to the pointer

    for(int i=0; i<3; i++){
        cin>> ptr[i];
    }
    
    for(int i=0; i<3; i++){
        cout<<"(Malloc)The value of ptr["<<i<< "] is: "<< ptr[i]<<endl;
    }

    // Use of calloc
    int *ptr1;
    ptr1 = (int*) calloc(4, sizeof(int));
    // calloc allocate the initial value 0 to memory locations(if we dont enter values)

    for(int i=0; i<3; i++){
        cin>> ptr1[i];
    }
    
    for(int i=0; i<3; i++){
        cout<<"(Calloc)The value of ptr["<<i<< "] is: "<< ptr1[i]<<endl;
    }
    
    // Use of realloc-> we can change the size of previously allocate memory using rellock function

    cout<<"change the size of previously allocate memory"<<endl;
    ptr1 = (int*) realloc(ptr1, 6*sizeof(int));

    cout<<"Enter the new values of new size memory"<<endl;
    for(int i=0; i<6; i++){
        cin>> ptr1[i];
    }
    
    for(int i=0; i<6; i++){
        cout<<"(realloc)The value of ptr["<<i<< "] is: "<< ptr1[i]<<endl;
    }

    free(ptr1);

    return 0;
}