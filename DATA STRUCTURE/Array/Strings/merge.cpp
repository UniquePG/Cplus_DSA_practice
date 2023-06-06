#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1 = "pav";
    string s2 = "an";

    // Merge two string using append function

    s1.append(s2);
    cout << s1 << endl;

    // another methords of merge strings
    /* 
    
    s1 = s1 + s2;
    cout<<s1<<endl;

     */
    /*
     cout<<s1 + s2;
     */

    // Access any string element
    cout << s1[2] << endl; // print V from s1

    // Use of clear function

    string abc = "adoijeokdjueiibf";

    abc.clear(); // for clear the string
    cout << abc;

    return 0;
}