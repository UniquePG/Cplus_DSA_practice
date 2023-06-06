#include<iostream>
using namespace std;


int main(){
    float m1,m2,m3,total,per;
    cout<<"Enter the marks of English, Maths and Science:"<<endl;
    cin>>m1>>m2>>m3;

    total = m1 + m2 +m3;
    per = total/3;


    cout<<"                         MARKSHEET                         "<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"          Subject                             Marks           "<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"           English                             "<<m1<<endl;
    cout<<"           Math                                "<<m2<<endl;
    cout<<"           Science                             "<<m3<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Total Marks                                    "<<total<<endl;
    cout<<"Total Percentage                               "<<per<<"%"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;

   
    

    return 0;
}