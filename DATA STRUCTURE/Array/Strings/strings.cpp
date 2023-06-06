#include<iostream>
#include<string>
using namespace std;

int main(){
    
    // String declare
    string str = "Helloworld";
    cout<<str<<endl;

    string str2(5, 'p'); // another methor of declaration
    cout<< str2<<endl;

   // string input
    string str3;
    cin>>str3;              //Input string without space
    cout<<str3<<endl; 

    string var;
    getline(cin, var);         // input whole sentance 
    cout<<var;
    
    
    return 0;
}