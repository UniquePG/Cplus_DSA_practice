#include<iostream>
using namespace std;

class student
{
    int roll,age;
    public:
    
    student()               //default constractor
{

}
student(int rno, int ag)     //para constroctor
{
    roll=rno;
    age=ag;

}
student(student & obj)          //copy constractor
{
    roll=obj.roll;
    age=obj.age;

}
void disp()
{
    cout<<"\n roll number of student: "<<roll;
    cout<<"\n age of student: "<<age;

}
};
int main()
{
    student dev(562, 12);
    student rohan(345, 22);
    student vikash(454, 21);
    student rishabh(567, 24);

    dev.disp();
    rohan.disp();
    vikash.disp();
    rishabh.disp();
}