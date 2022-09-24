#include <iostream>

using namespace std;

class complex
{
private:
	double real;
	double imaginary;
public:
	complex(double r = 0 , double i = 0 ) 
		: real(r) , imaginary(i){} 
	/* 
	complex(double r = 0 , double i = 0 )
	{
		real = r;
		imaginary = i;
	}
	*/

	void setValue()
	{
		cin >> real;
		cout << "\n";
		cin >> imaginary;
	}

	void display()
	{
		cout << real << " + " << imaginary << "i" << endl;
	}

	void sum(complex c1, complex c2) // bunlar obje aslında
	{
		real = c1.real + c2.real;
		imaginary = c1.imaginary + c2.imaginary;
	}

	void substraction(complex c1, complex c2)
	{
		real = c1.real - c2.real;
		imaginary = c1.imaginary - c2.imaginary;
	}

};

int main()
{
	complex c1, c2, c3;

	cout << "Enter real and imaginary part of first complex number" << endl;
	c1.setValue();
	cout << "Enter real and imaginary part of second complex number" << endl;
	c2.setValue();
	cout << "Sum of the two complex number is : ";

	c3.sum(c1, c2);

	c3.display();

	cout << "\nSubstarction of the two complex number is : ";

	c3.substraction(c1 , c2);
	
	c3.display();

}