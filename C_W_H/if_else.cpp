// if-else program practice

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

// selection control structure ---->>if-else if - else ladder

    if(age<18)
    {
        cout<<"you are not elligible for the party"<<endl;

    }
    else if(age==18)
    {
        cout<<"you are kid and you will get a kid pass to the party"<<endl;

    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    return 0;
}