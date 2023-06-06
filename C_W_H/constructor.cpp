#include <iostream>
using namespace std;

class complex
{
  int a, b;

public:
  //creating a constructor
  /*  constructor is a special member function with same name as of the class.
      It is used to initializ the onjects of its class */
  //It is automaticaly invocked(Run) whenever an object is created

  complex(void); //constructor declaration
  void printnum()
  {

    cout << "Your number is " << a << "+" << b << "i" << endl;
  }
};

complex ::complex(void)   //define construction (This is a default constructor as it takes no parameter)
{
  a = 5;
  b = 8;
}

int main()
{
  complex c1;
  c1.printnum();

  return 0;
}


    /* characteristics of constructor

    1. It should be declared in the public section of the class 
    2. they are automaticaly invoced whenever the object is created
    3. they can not return value and do not have return types
    4. It can have default arguments
    5. We can not refer to their address

    */