#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;       //static variable sabhi object lete h kisi ek object ke liye nh.

public:
    void setdata(void)
    {
        cout << "Enter the Id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of your employee " << id << " and this is employee number" << count << endl;
    }
    
};

int Employee ::count; //static data member(default value is 0) sabhi object share karenge

int main()
{

    Employee harry, rohan, lovish;

    // harry.id = 1;
    // harry.count = 1;       //can not do that as id and count are private

    harry.setdata();
    harry.getdata();

    rohan.setdata();
    rohan.getdata();

    lovish.setdata();
    lovish.getdata();
    return 0;
}