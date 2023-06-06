#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char nm[10];
    int age;
    cout<<"Enter name and age"<<endl;
    cin>>nm>>age;

    ofstream of("demofile.txt");
    of<<nm<<"\n"<<age;
    of.close();

    ifstream iff("demofile.txt");
    iff>>nm>>age;

    cout<<nm<<age;
    iff.close();

    

    
    return 0;
}