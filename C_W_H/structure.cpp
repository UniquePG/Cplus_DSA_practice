#include<iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eId;
//     char favchar;
//     float sallary;
// };


typedef struct employee             //We can use typedef for shortcut(change the function name)
{
    /* data */
    int eId;
    char favchar;
    float sallary;
} ep;                               //This is shortcut 'ep'

int main(){
    // struct employee harry;
    ep harry;                   //WE can use ep (using typedef function)
    struct employee Shubham;
    struct employee rohan;

    harry.eId = 1;
    harry.favchar = 'p';
    harry.sallary = 120000;

    cout<<"The value is "<<harry.sallary<<endl;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favchar<<endl;

    return 0;
}