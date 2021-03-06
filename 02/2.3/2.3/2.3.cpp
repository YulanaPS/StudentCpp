#include <stdio.h>
#include <string.h>
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

bool chek_number_or_sign(int symbol)
{
	bool flag = false;

	if (symbol == '-')
	{
		flag = true;
	}

	else
	{
		for (int i = '0'; i < ':'; i++)
		{
			if (symbol == i)
			{
				flag = true;
			}
		}
	}

	return flag;
}

bool chek_number(int symbol)
{
	bool flag = false;

	for (int i = '0'; i < ':'; i++)
	{
		if (symbol == i)
		{
			flag = true;
		}
	}

	return flag;
}

bool chek_operation(int symbol)
{
	bool flag = false;

	if ((symbol == '*') || (symbol == '+') || (symbol == '-') || (symbol == '/'))
	{
		flag = true;
	}

	return flag;
}

double calculate(double a, double b, char operation)
{
	if (operation == '+')
	{
		return a + b;
	}

	else if (operation == '-')
	{
		return a - b;
	}

	else if (operation == '*')
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
	char input[100];
	double a = 0, b = 0;
	int j = 0, j1 = 0;
	int sign = 1;
	int kol_num = 0;
	char operation;
	double result;

	cout << "Input string\n";
	gets_s(input);

	while (chek_number_or_sign((int)input[j]) != true)
	{
		j++;
	}

	if ((int)input[j] == '-')
	{
		j++;
		sign = -1;
	}

	while ((chek_number_or_sign((int)input[j]) == true) && (chek_number((int)input[j]) == false))
	{
		j++;
	}

	while ((chek_number_or_sign((int)input[j]) == true) && (chek_number((int)input[j]) == true))
	{
		j++;
		kol_num++;
	}

	j1 = j - kol_num;

	for (int i = j1; i < j; i++)
	{
		a = a + ((int)input[i] - 48)*pow(10, kol_num - 1);
		kol_num--;
	}

	if ((input[j] == '.') && (chek_number((int)input[j + 1]) == true))
	{
		j++;
		kol_num = 1;

		while (chek_number((int)input[j]) == true)
		{
			a = a + ((int)input[j] - 48)*pow(0.1, kol_num);
			kol_num++;
			j++;
		}
	}

	a = a * sign;

	while (chek_operation((int)input[j]) != true)
	{
		j++;
	}

	operation = (int)input[j];
	kol_num = 0;
	sign = 1;
	j++;


	while (chek_number_or_sign((int)input[j]) != true)
	{
		j++;
	}

	if ((int)input[j] == '-')
	{
		j++;
		sign = -1;
	}

	while ((chek_number_or_sign((int)input[j]) == true) && (chek_number((int)input[j]) == false))
	{
		j++;
	}

	while ((chek_number_or_sign((int)input[j]) == true) && (chek_number((int)input[j]) == true))
	{
		j++;
		kol_num++;
	}

	j1 = j - kol_num;

	for (int i = j1; i < j; i++)
	{
		b = b + ((int)input[i] - 48)*pow(10, kol_num - 1);
		kol_num--;
	}

	if ((input[j] == '.') && (chek_number((int)input[j + 1]) == true))
	{
		j++;
		kol_num = 1;

		while (chek_number((int)input[j]) == true)
		{
			b = b + ((int)input[j] - 48)*pow(0.1, kol_num);
			kol_num++;
			j++;
		}
	}

	b = b * sign;

	result = calculate(a, b, operation);
	cout << result;

	system("pause");
	return 0;
}

