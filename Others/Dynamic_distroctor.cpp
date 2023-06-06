#include <iostream>
using namespace std;

class string
{
    char *str;

public:
    string(int n)
    {
        str = newchar[n + 1];
    }
    ~string()
    {
        delete str;
    }
    void get()
    {
        cout << "Enter string" << endl;
        cin >> str;
    }
    void disp()
    {
        cout << str << endl;
    }
    string combine(string s)
    {
        string temp[strlen(str) + strlen(s.str)];
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        cout << temp.str;

        return temp;
    }
};

int main()
{
    int n1, n2;
    cout << "Enter size of string";
    cin >> n1;

    string s1[n1];
    s1.get();
    cout << "Enter size of string 2";
    cin >> n2;

    string s2[n2];
    s2.get();

    string s3(n1 + n2);
    s3 = s1.combine(s2);
    s3.disp();

    return 0;
}