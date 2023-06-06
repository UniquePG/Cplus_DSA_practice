#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};
void student ::set_rollnumber(int r)
{
    roll_number = r;
}
void student ::get_rollnumber()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_rollnumber();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /* 
    NOTE:
           If we are inheriting B from A and C from B:[A-->B-->c]
        1. A is the base class for B and B is the base class for C
        2. A->B->C is called Inheritance path 
     */
    result harry;
    harry.set_rollnumber(350);
    harry.set_marks(95.0, 90.0);
    harry.display();

    return 0;
}