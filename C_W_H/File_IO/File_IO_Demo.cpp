#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

/*
Useful classes for working with a file in c++:
    1) fstreambase -> This is the base class of fstream
    2) ifstream    -> This is the derived class of (fstreambase )class
    3) ofstream    -> This is the derived class of (fstreambase )class

     ifstream -> this class is used to read a file 
     ifstream -> this class is used write something in a file
 */

/* 
In order to work with a file in c++, you will have to open it, primilarly there are 2 ways to open a file:-

    1) Using the constructor
    2) Using the member function "open() " of the class
 */

int main(){
    // 1) Opening files using constructor

    // Opening a file using constructor and reading it
    string st;
    ifstream obj_in("sample.txt");  // opening a file for reading
    
    // obj_in>>st;     // write the data of the obj_in(sample.txt) in the string "st"  (from this we can write only one word of the file(sample.txt), not the whole line)

    getline(obj_in, st);     // "getline(ifstream_obj, new_string)" this is used when we want to write while line 
    cout<<st;       // after writing data, print the string 'st'


    // Opening a file using contructor and writting in it
    string st1 = "Hello World... write the data using ofstream class";
    ofstream obj_out("sample1.txt"); // opening a file for writting in it

    obj_out << st1;  // write the string st1 in the file (sample1.txt)

    return 0;
}

/* 
    ifstream -> >> (cin)     // ifstream_obj >> 
    ofstream -> << (cout)   // ofstream_obj << 
 */