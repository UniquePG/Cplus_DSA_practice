#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int empid)
    {
        id = empid;
        salary = 500;
    }
    Employee() {}
};
//derived class
/* 
Syntex:
 class {{derived- class}} : {{visibility-mode}} {{baseclass-name}}
 {
     class members/methords/etc...
 };

 NOTE:
 1. Dafault visibility mode is private
 2. public visibility mode: public members of the base class becomes public members of the derived class
 3. Private visibility mode: Public members of the base class becomes private members of the derived class
 4. private members are never inherited
 */

// creating a programmer class derived from Employee base class

class programmer : public Employee
{
public:
    int languagecode = 9;
    
    programmer(int empid)
    {
        id = empid;
    }
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee rohan(1), harry(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    programmer skillf(10);
    cout << skillf.languagecode;
    cout << skillf.id;      // becouse visibility mode is public
    skillf.getdata();

    return 0;
}