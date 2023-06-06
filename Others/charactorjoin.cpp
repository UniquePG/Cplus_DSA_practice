#include<iostream>
#include<string.h>
using namespace std;

class adds{
    char s1[20], s2[20];
    public:
        adds(char st1[], char st2[]){
            strcpy(s1, st1);    // strcpy function copy from st1 to s1 
            strcpy(s2, st2);
        }
        void operator +(){
        // "strcat(dest_string, source_string)" using to join two strings 
            cout<<"The concatenated string is "<<strcat(s1, s2)<<endl;
        }
};
int main(){
    char m1[] = "Hello";
    char m2[] = " Friend";
    adds a(m1, m2);
    +a;
    return 0;
}