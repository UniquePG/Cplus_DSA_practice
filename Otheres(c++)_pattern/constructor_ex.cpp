#include <iostream>
using namespace std;

class array
{
    int a[5];
    int total;

public:
    array()
    {
        total = 0;
    }

    void get();
    void calc();
    void disp();
};

void array::get()
{
    cout << "Enter array elements: ";
    for (int i = 0; i <= 4; i++)
    {
        cin >> a[5];
    }
    
}

void array::calc()
{
    for (int i = 0; i <= 4; i++)
    {
        total = total + a[i];
    }
    
}

void array::disp()
{
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << a[i];
    // }
    // cout << "\n";
    cout << "Sum of array element is " << total << "\n";
}

int main()
{
    array a1;

    a1.get();
    a1.calc();
    a1.disp();

    return 0;
}