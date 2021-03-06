#include <stdio.h>
#include <string.h>
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

double calculation(char sym, double a, double b)
{
	if (sym == '+')
	{
		return a + b;
	}

	else if (sym == '-')
	{
		return a - b;
	}

	else if (sym == '*')
	{
		return a * b;
	}

	else
	{
		return a / b;
	}
}

int main()
{
	char input[100], integer[100], doub[100];
	double constants[100];
	int i = 0, j = 0;
	int k = 0, k1 = 1;
	int wp = 0;
	int num, num1, num2;
	bool negative = 0;

	cout << "Input constants\n";
	gets_s(input);

	while (strcmp(input, "end") != 0)
	{
		constants[i] = 0;

		num = 0;
		num2 = 0;

		if (input[num] == '-')
		{
			negative = 1;
			num++;
		}


		while ((input[num] != '.') && (num < strlen(input)))
		{
			integer[num2] = ' ';
			integer[num2] = input[num];
			num++;
			num2++;
		}

		num++;
		num1 = 0;

		while (num < strlen(input))
		{
			doub[num] = ' ';
			doub[num1] = input[num];
			num++;
			num1++;
		}

		for (int j = num2; j > 0; j--)
		{
			constants[i] = constants[i] + ((int)integer[j - 1] - 48)* pow(10, k);
			k++;
		}

		for (int j = 0; j < num1; j++)
		{
			constants[i] = constants[i] + ((int)doub[j] - 48)* pow(0.1, k1);
			k1++;
		}

		if (negative == 1)
		{
			constants[i] = constants[i] * (-1);
		}

		i++;
		k = 0;
		k1 = 1;
		negative = 0;

		gets_s(input);
	}

	cout << "Input operations\n";
	int maxsize = 100;
	cin.getline(input, maxsize);

	int n = i - 1;
	i = 0;
	double result = constants[i];

	for (int j = 0; input[j] != '\0'; j++)
	{
		if (i + 1 <= n)
		{
			if (input[j] != ' ')
			{
				i++;

				result = calculation(input[j], result, constants[i]);
			}
		}
	}

	cout << result;
	system("pause");
	return 0;
}