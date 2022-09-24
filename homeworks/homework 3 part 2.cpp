/*
Create an Account class that a bank might use to represent customers bank accounts. 
Include a data member of type int to represent the account balance. 
Provide a constructor that receives an initial balance and uses it to initialize the data member. 
The constructor should validate the initial balance to ensure that it’s greater than or equal to 0. 
If not, set the balance to 0 and display an error message indicating that the initial balance was invalid. 
Provide three member functions. Member function credit should add an amount to the current balance. 
Member function debit should withdraw money from the Account and ensure that the debit amount does not exceed the Account’s balance. 
If it does, the balance should be left unchanged, and the function should print a message indicating "Debit amount exceeded account balance."
Member function get Balance should return the current balance. Create a program that creates two Account objects and tests the member functions of class Account.
*/

#include <iostream>

using namespace std;

class account
{
private:
    string x, y;
    double balance;
    double debit;

public:
    account(string a, string b, double m) {
        x = a;
        y = b;
        balance = m;
    }

    void withdraw(double k) {
        debit = k;
        if (debit >= 0 && debit <= balance)
        {
            balance = balance - debit;
        }
        else
        {
            cerr << "the debit amount exceeded account balance\n";
        }
    }
    void input(double k) {
        debit = k;
        if (debit >= 0)
        {
            balance = balance + debit;
        }
    }

    void getBalance()
    {
        cout << x << " - " << y << " - current balance: " << balance << endl;
    }

};

int main()
{
    account account1("A Bank", "Ebru Kilic", 1000);
    account account2("B Bank", "Ebru Kilic", 382);


    account1.withdraw(250.5);
    account1.getBalance();
    account1.input(100);
    account1.getBalance();
    account1.withdraw(1000);
    account1.getBalance();
    account2.withdraw(200);
    account2.getBalance();

}