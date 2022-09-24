/*
Question:
Write a program where it identifies if a number is odd or even. The software should take user input in the main function.  The function that decides if the number is odd or even should be done inside the class function of your program.
You are free to be creative in your program as long as you follow the given parameters.
*/
#include <iostream>
using namespace std;

class odd_even_checker
{
public:
    int num;
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void check() {
        if (num % 2 == 0) {
            cout << num << " is an even number:";
        }
        else {
            cout << num << " is an odd number";
        }
    }


};
int main()
{
    odd_even_checker   even_odd;
    even_odd.input();
    even_odd.check();
    return 0;
}
