// Lab1.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath> // library for sqrt and log
using namespace std;



int main()
{
	int e; // for base of log 
	double a, b;
	int c; // to select an operation
	char d;
	do
	{
		cout << "Hello, my dear. What are the numbers?\n";
		cout << "Number 1: ";
		if (cin >> a)
		{
			cout << "Number 2: ";
			if (cin >> b)
			{
				cout << "What do you want to do?\n";
				cout << "1. +\n";
				cout << "2. -\n";
				cout << "3. *\n";
				cout << "4. /\n";
				cout << "5. sqr\n";
				cout << "6. sqrt\n";
				cout << "7. log\n";
				cout << "Your answer: ";
				cin >> c;
				if (c == 1)
				{
					cout << "Result = ";
					cout << a + b << "\n";
				}
				else if (c == 2)
				{
					cout << "Result = ";
					cout << a - b << "\n";
				}
				else if (c == 3)
				{
					cout << "Result = ";
					cout << a * b << "\n";
				}
				else if (c == 4)
				{
					cout << "Result = ";
					cout << a / b << "\n";
				}
				else if (c == 5)
				{
					if (a == 2)
					{
						cout << "Result = ";
						cout << b * b << "\n";
					}
					else if (b == 2)
					{
						cout << "Result = ";
						cout << a * a << "\n";
					}
					else cout << "Incorrect input for sqr\n";
				}
				else if (c == 6)
				{
					if (a == 2)
					{
						cout << "Result = ";
						cout << sqrt(b) << "\n";
					}
					else if (b == 2)
					{
						cout << "Result = ";
						cout << sqrt(a) << "\n";
					}
					else cout << "Incorrect input for sqrt\n";
				}
				else if (c == 7)
				{
					cout << "What number is the base of the logarithm?\n";
					cout << "Base of the logarithm is number: ";
					cin >> e;
					if (e == 1)
					{
						cout << "Result = ";
						cout << log(b) / log(a) << "\n";
					}
					else if (e == 2)
					{
						cout << "Result = ";
						cout << log(a) / log(b) << "\n";
					}
					else
					{
						cout << "Incorrect input for the base of logarithm\n";
					}
				}
				else
				{
					cout << "Incorrect input for number of operation\n";
				}
				cout << "Do you want to try again? y/n\n";
				cin >> d;
			}
			else
			{
				cout << "Incorect input for number 2\n";
			}
		}
		else
		{
			cout << "Incorect input for number 1\n";
		}
	}
	while (d == 'y');
	system("pause");
	return 0;
}
