#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "xyz";
    string s3 = "abc";

    cout << s2.compare(s1) << endl; // xyz is bigger than abc  (s2 compare with s1)

    if (s1.compare(s3) == 0)
    {
        cout << "String are equal" << endl;
    }
    // OR
    if (!s1.compare(s3))
    {
        cout << "string are equal" << endl;
    }
    return 0;
}