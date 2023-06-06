// No return No pass

#include <iostream>
using namespace std;

void add(void);         //function declaration

int main(){

    add();
    add();              //function calling
    add();

}
 void add(void){        //function defination
     int a=2, b=3, c;
     c = a+b;
     cout<<c;
 }