#include <iostream>
using namespace std;

class bookstore
{
    char name;
    int price;
    int num;
    static int count;

public:
    void bookname(void);
    void bookprice(void);
    void booknum(void);
    void disp(void);
};

void bookstore ::bookname(void)
{
    cout << "Enter your book name: " << endl;
    cin >> name;
}

void bookstore ::bookprice(void)
{
    cout << "Enter book price: " << endl;
    cin >> price;
}

void bookstore ::booknum(void)
{
    count++;
}
int bookstore ::count;

void bookstore ::disp(void)
{
   
    
        cout << "your " << count << " book is " << name << " and it's price " << price << endl;
    
}

int main()
{
    bookstore b;

    b.bookname();
    b.bookprice();
    b.booknum();
    b.disp();

    return 0;
}