#include<iostream>
using namespace std;


inline int product(int a , int b){            //This is inline function( use inline function in small functions)

    return a*b;
}

// Default Arguments 
float moneyReceived(int currentmoney, float factor = 1.04){     //Compulsory arguments ke baad he Default arguments likne hai

    return currentmoney * factor;
}


int main(){

//inline function

    int a, b; 
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;


    // Default Arguments

    int money = 100000;

    cout<<"If you have "<<money<< " rs in your bank account, you will receive "<<moneyReceived(money)<< " rs after 1 year"<<endl;

    cout<<" For VIP --> If you have "<<money<< " rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<< " rs after 1 year";
    

    return 0;
}