/*
Question:
Write a program where your software takes a user input and determines whether it is an odd or even number.

Example:
Enter a number to identify if it is odd or even: 7
Your number is odd

Enter a number to identify if it is odd or even: 8
Your number is even
*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Please enter an integer" << endl;
    cin >> x;
    if (x % 2 == 0)
        cout << x << " is an even number";
    else
        cout << x << " is an odd number";
    return 0;
}
