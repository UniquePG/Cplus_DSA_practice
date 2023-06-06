#include<iostream>
using namespace std;

void swap(int a, int b)
{                 // temp, a, b
    int temp = a; //  4  , 4, 5
    a = b;        //  4  , 5, 5
    b = temp;     //  4  , 5, 4
    cout << a<<endl<<b;
}

int main(){
    int x=23;
    int y=32;
    swap(x,y);
    
    return 0;
}