#include<iostream>
using namespace std;

int main(){
    int marks[4] = {78,46,39,30};       //This is called Array

    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathmarks[3];
    mathmarks[0] = 223;
    mathmarks[1] = 753;
    mathmarks[2] = 192;

    cout<<"These are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;

    //You can change the value of array

    marks[2] = 456;
    marks[1] = 980;

    cout<<marks[2]<<endl;
    cout<<marks[1]<<endl;

    //Printing Marks using For loop

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks " <<i<< " is " << marks[i] <<endl;
    }
    


    
    return 0;
}