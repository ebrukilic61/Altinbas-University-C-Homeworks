#include <iostream>

using namespace std;

class Rational
{
private:
	int num;
	int denom;
public:
	Rational(int numerator = 1, int denominator = 1)
	{
		num = numerator;
		denom = denominator;
	}
	void setValue()
	{
		cout << "numerator: ";
		cin >> num;
		cout << "and denominator: ";
		cin >> denom;
	}
	void display()
	{
		if (denom == 0) // validates denominator
			cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
		else if (num == 0) // validates numerator
			cout << 0;
		else
			cout << num << "/" << denom << endl;
		reduction();
	}
	void add(Rational r1, Rational r2)
	{
		if(r1.denom == r2.denom)
		{
			num = r1.num + r2.num;
		}
		else
		{
			denom = r1.denom * r2.denom;

			num = (r1.num * r2.denom) + (r2.num * r1.denom);
		}
		reduction();
	}
	void substract(Rational r1, Rational r2)
	{
		if (r1.denom == r2.denom)
		{
			num = r1.num - r2.num;
		}
		else
		{
			denom = r1.denom * r2.denom;

			num = (r1.num * r2.denom) - (r2.num * r1.denom);
		}
		reduction();
	}
	void multiply(Rational r1, Rational r2)
	{
		num = r1.num * r2.num;

		denom = r1.denom * r2.denom;

		reduction();
	}
	void reduction()
	{
		int largest;
		largest = num > denom ? num : denom;
		int gcd = 0; // greatest common divisor
		for (int loop = 2; loop <= largest; loop++)
			if (num % loop == 0 && denom % loop == 0)
				gcd = loop;
		if (gcd != 0)
		{
			num /= gcd;
			denom /= gcd;
		} // end if 
	}
};

int main()
{

	Rational a1, a2, a3;

	cout << "Enter the first rational number" << endl;
	a1.setValue();
	cout << "\nEnter the second rational number : ";
	a2.setValue();

	cout << "\nSum of these two rational number is = ";
	a3.add(a1,a2); 
	a3.display();

	cout << "Substraction of these two rational number is = ";
	a3.substract(a1, a2);
	a3.display();

	cout << "Multiplication of these two number is = ";
	a3.multiply(a1, a2);
	a3.display();
	
}  