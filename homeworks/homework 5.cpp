/*
Questions:
You are expected to generate a password of 8 characters. These characters can be between numbers and alphabets letters (small and larger). 
Arrays cannot be used in your programs.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 8; i++) {
        cout << char(rand() % 93 + 34);  //It's for ASCII characters
    }

    return 0;

}
