#include <iostream>
using namespace std;

class shop
{
    int itemId[50];
    int itemprice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemId[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    int n;
    cout << "number of your total items" << endl;
    cin >> n;
    shop dukan[n];
    dukan->initcounter();
    for (int i = 0; i < n; i++)
    {
        dukan->setprice();
    }
    dukan->displayprice();

    return 0;
}