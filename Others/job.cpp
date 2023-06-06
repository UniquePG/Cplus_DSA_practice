#include <iostream>
using namespace std;

int main()
{
    int age, hsp, hssp, Emarks, Imarks;

    cout << "Enter your age: " << endl;
    cin >> age;

    if (age >= 18 && age <= 25)
    {
        cout << "Age Qualification matched!" << endl;
        cout << "Enter your High school percentages: " << endl;
        cin >> hsp;
        if (hsp >= 60 && hsp <= 100)
        {
            cout << "Qualify" << endl;
            cout << "Enter your high secondary percentages: " << endl;
            cin >> hssp;
            if (hssp >= 70 && hssp <= 100)
            {
                cout << "You are qualify for exam round!" << endl;
                cout << "Enter your written exam marks: " << endl;
                cin >> Emarks;
                if (Emarks >= 80 && Emarks <= 100)
                {
                    cout << "Congratulation! You are Qualified for Interview round" << endl;
                    cout << "Enter your interview marks: " << endl;
                    cin >> Imarks;
                    if (Imarks >= 80 && Imarks <= 100)
                    {
                        cout << "Congratulation! You got the job" << endl;
                    }
                    else
                    {
                        cout << "Sorry! You can't clear interview round" << endl;
                    }
                }
            
                else
                {
                    cout << "You are not qualified for interview round" << endl;
                }
            }
            else
            {
                cout<<"high secondary marks in low"<<endl;
            }
        }
            else
            {
                cout << "high school marks is low" << endl;
            }
        
    }
        else
        {
            cout << "Your age is not matched for this job" << endl;
        }

        return 0;
}