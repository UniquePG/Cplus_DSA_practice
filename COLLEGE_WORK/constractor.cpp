// This program is inform the constractor
//calling by object

#include<iostream>
using namespace std;

class mohit
{
    public:
    mohit()
    {
        cout<<"mohit have a lot of books and study material"<<endl;

    }
    void study()
    {
        cout<<"books and study material"<<endl;

    }
};
int main()
{
    mohit obj;
    obj.study();
}