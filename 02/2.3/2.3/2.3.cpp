#include <stdio.h>
#include <string.h>
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

bool chek(int symbol)
{
	bool flag = false;

	if (symbol == 45)
	{
		flag = true;
	}

	else
	{
		for (int i = 48; i < 58; i++)
		{
			if (symbol == i)
			{
				flag = true;
			}
		}
	}

	return flag;
}

bool chek2(int symbol)
{
	bool flag = false;

	for (int i = 48; i < 58; i++)
	{
		if (symbol == i)
		{
			flag = true;
		}
	}

	return flag;
}

bool chek3(int symbol)
{
	bool flag = false;

	if ((symbol == 42) || (symbol == 43) || (symbol == 45) || (symbol == 47))
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

	while (chek((int)input[j]) != true)
	{
		j++;
	}

	if ((int)input[j] == 45)
	{
		j++;
		sign = -1;
	}

	while ((chek((int)input[j]) == true) && (chek2((int)input[j]) == false))
	{
		j++;
	}

	while ((chek((int)input[j]) == true) && (chek2((int)input[j]) == true))
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

	if ((input[j] == '.') && (chek2((int)input[j + 1]) == true))
	{
		j++;
		kol_num = 1;

		while (chek2((int)input[j]) == true)
		{
			a = a + ((int)input[j] - 48)*pow(0.1, kol_num);
			kol_num++;
			j++;
		}
	}

	a = a * sign;

	while (chek3((int)input[j]) != true)
	{
		j++;
	}

	operation = (int)input[j];
	kol_num = 0;
	sign = 1;
	j++;


	while (chek((int)input[j]) != true)
	{
		j++;
	}

	if ((int)input[j] == 45)
	{
		j++;
		sign = -1;
	}

	while ((chek((int)input[j]) == true) && (chek2((int)input[j]) == false))
	{
		j++;
	}

	while ((chek((int)input[j]) == true) && (chek2((int)input[j]) == true))
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

	if ((input[j] == '.') && (chek2((int)input[j + 1]) == true))
	{
		j++;
		kol_num = 1;

		while (chek2((int)input[j]) == true)
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

