#include<iostream>
using namespace std;

union money
{
    /* data */
    int rice;  //4byts
    char car;   //1byts
    float pounds;  //4byts 
};


int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    
    cout<<m1.car;

    return 0;
}