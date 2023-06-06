//Vitual base class
#include <iostream>
using namespace std;
/* 
 Syntax:-
class B : virtual public A{           // A is a virtual Base class

} 
*/

/*
student--> test 
student--> sports
test--> result 
sports--> result 
 */

class student
{
protected:
    int rollNo;

public:
    void setNo(int a)
    {
        rollNo = a;
    }
    void printNo()
    {
        cout << "Your Roll No. is: " << rollNo << endl;
    }
};
class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void setMAarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks()
    {
        cout << "Your Result is here: " << endl
             << "Maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setScore(int s)
    {
        score = s;
    }
    void printScore()
    {
        cout << "Your PT Score: " << score << endl;
    }
};

class result : public Test, public sports
{
private:
    float Total;

public:
    void display(void)
    {
        Total = maths + physics + score;
        printNo();
        printMarks();
        printScore();

        cout << "Your Total Score is: " << Total << endl;
    }
};

int main()
{
    result harry;
    harry.setNo(2500);
    harry.setMAarks(75.50, 98.90);
    harry.setScore(8);
    harry.display();
    return 0;
}