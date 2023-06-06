#include<iostream>
using namespace std;

class student{
    public:
        char name;
        char subj;
        int rollNum; 
        float marks;  
        void getdata(){
            cout<<"Enter your name\n";
            cin>>name;
            cout<<"Enter your subject\n";
            cin>>subj;
            cout<<"Enter your roll number\n";
            cin>>rollNum;
            cout<<"Enter your marks\n";
            cin>>marks;
        }
        void showdata(){
            cout<<"name    "<<"subject    "<<"rollNumber    "<<"Marks    "<<endl;
            cout<<"----------------------------------------------------------"<<endl;
            cout<<name<<"    "<<subj<<"    "<<rollNum<<"    "<<marks<<"    ";
        }
};
int main(){
        string name;
        string subj;
        int rollNum; 
        float marks; 

        cout<<"Enter your name\n";
            cin>>name;
            cout<<"Enter your subject\n";
            cin>>subj;
            cout<<"Enter your roll number\n";
            cin>>rollNum;
            cout<<"Enter your marks\n";
            cin>>marks;

             cout<<"name    "<<"subject    "<<"rollNumber    "<<"Marks    "<<endl;
            cout<<"----------------------------------------------------------"<<endl;
            cout<<name<<"    "<<subj<<"      "<<rollNum<<"      "<<marks<<"    ";
}