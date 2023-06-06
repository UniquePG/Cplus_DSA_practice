#include<iostream>
using namespace std;


// Calculate factorial using Recursion

int Factorial(int n){

    if(n<=1){
        return 1;
    }

    return n * Factorial(n-1);

}

// Step by step calculation of factorial(4)

// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 *  factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;

int main(){
    int a;

    cout<<"Enter the number a "<<endl;
    cin>>a;

    cout<<"The factorial of "<< a << " is "<< Factorial(a)<<endl;

   
    return 0;
}