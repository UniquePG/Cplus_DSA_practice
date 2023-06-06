#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

// switch case 

    switch (age)
    {
    case 18:
        
        cout<<"you are 18"<<endl;
        break;
    case 22:
        
        cout<<"you are 22"<<endl;
        break;
    case 15:
        
        cout<<"you are 15"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch cases";
    return 0;
}