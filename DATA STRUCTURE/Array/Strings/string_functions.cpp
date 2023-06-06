#include <iostream>
#include <string>
#include <algorithm> // to use sort function
using namespace std;

int main()
{
    // Clear function
    string s1 = "pavan";

    s1.clear();

    if (s1.empty())
        cout << "string is empty" << endl;

    string s2 = "gupta";

    if (!s2.empty()) // string s2 is not empty
        cout << "string is not empty" << endl;

    //  Erase funtion

    string s3 = "nincompoop";

    s3.erase(2, 3); // 2nd caractor se start krke 3 charactor delete krne hai(delete NCO from string s3)

    cout << s3 << endl;

    // Find funciton

    string s4 = "international";

    cout << s4.find("nat") << endl; // output 5 becoz nat at index 5

    // inseart function

    string s5 = "public";

    s5.insert(3, "hub"); // inseart hub at index 3
    cout << s5 << endl;

    // leangth function

    cout << s4.length() << endl; // find lenght of string
    /* We can also use size(lenght) keyword */

    for (int i = 0; i < s4.length(); i++)
    {
        cout << s4[i] << endl; // To print all charactor of string
    }

    // Substr function

    string s6 = "Nincompoop";

    string str = s6.substr(3, 5); // index-3  se next 5 charactor tak ke substring
    cout << str << endl;

    // numerice string convert into int
    /* 

    string s7 = "787";
    int x = stoi(s7);           // stoi function to convert into integer
    cout<<x+3 <<endl; 
    
    */

    // int convert to string
    int x = 786;

    cout << to_string(x) + "5" << endl; // merge 5 to string (append)

    // Sort a string

    string s8 = "skhildbug";

    sort(s8.begin(), s8.end()); // sort in assending order low to high
                                // To use sort function we have to include "algorithm"  header fle
    cout << s8 << endl;

    return 0;
}