#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//This will not swap a and b
void swap(int a, int b)
{                 // temp, a, b
    int temp = a; //  4  , 4, 5
    a = b;        //  4  , 5, 5
    b = temp;     //  4  , 5, 4
}

//call by reference using pointer referance

void swapPointer(int *a, int *b)
{                  //temp, a, b
    int temp = *a; // 4  , 4, 5
    *a = *b;       // 4  , 5, 5
    *b = temp;     // 4  , 5, 4
}

// Call by reference using c++ reference variable
void swapReferenceVar(int &a, int &b)
{
    int temp = a; // 4  , 4, 5
    a = b;        // 4  , 5, 5
    b = temp;     // 4  , 5, 4
}

//We can change change value using return( return a so value change x)
int &swapReferenceVare(int &a, int &b)
{
    int temp = a; // 4  , 4, 5
    a = b;        // 4  , 5, 5
    b = temp;     // 4  , 5, 4

    return a;
}

int main()
{
    int x = 4, y = 5;

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // swap(x, y);                   //This will not swap a and b

    // swapPointer(&x, &y);        //This will swap the value of a and b using pointer reference

    swapReferenceVar(x, y); //This will swap the value of a and b  using reference variable

    swapReferenceVare(x, y) = 454; //This will swap the value of a and b  using reference variable

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}