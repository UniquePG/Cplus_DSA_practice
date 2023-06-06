#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Bank {
    private:
        char name[50], address[100], y;
        int balance;

    public:
        void Open_Account();
        void Deposite_Money();
        void Withdraw_Money();
        void Display_Account();
};

void Bank :: Open_Account(){
    cout<< "Enter your Full Name: \n";
    cin.ignore();
    cin.getline(name, 50);
    cout<< "Enter your Address: \n";
    cin.ignore();
    cin.getline(address, 100);
    cout<<"What Type of Account You want to Open - \n (1) Saving Account Type 's' \n (2) Current Account Type 'c' ";
    cin>>y;
    cout<< "Enter Amount for Deposite in your Account \n";
    cin>> balance;
    cout<<"Congratulation! Your Account is Created: \n";

}   

void Bank :: Deposite_Money(){
    int a;

    cout<<"Enter Amount You want to deposite \n";
    cin>>a;
    
    balance += a;
    cout<<"Total Amount you deposite :: \t" <<balance;
}

void Bank :: Withdraw_Money(){
    int amount;
    cout<<"Enter Amount to withdraw \n";
    cin>> amount;

    balance -= amount;

    cout<< "Balance in your Account: "<<balance;
}

void Bank :: Display_Account(){
    cout<<"Your Name:: "<<name;
    cout<<"Your Address:: "<<address;
    cout<<"Your Account is:: "<<y<<"Account";
    cout<<"Total balance in your Account:: "<<balance;

}

int main(){
    int choice;
    Bank obj;
    char x;

    cout<<"******** Bank Management System ******** \n"<<endl;
    do{
        cout<<"    Selete one option Below \n";
        cout<<"        1) Open an Account \n";   
        cout<<"        2) Deposite Money \n";   
        cout<<"        3) Withdraw Money \n";   
        cout<<"        4) Display Account \n";   
        cout<<"        5) Exit \n";   
        cout<<"------------------------------------------------------- \n";
        cout<<"Enter you choice: ";
        cin>> choice;

        switch (choice)
        {
        case 1:
            obj.Open_Account();
            break;
        case 2:
            obj.Deposite_Money();
            break;
        case 3:
            obj.Withdraw_Money();
            break;
        case 4:
            obj.Display_Account();
            break;
        case 5:
            exit(1);
            break;
        
        default:
            cout<<"Please Select the Valid Option and Try again";
            cout<<"If You want to try again then please type :: 'y' \n";
            cout<<"If you want to Exit then please type:: 'n' \n";
            cin>> x;

            if(x == 'n' || x == 'N')
                exit(0);
            
        }
        
        
    }while (x == 'y' || x == 'Y');


    return 0;
}