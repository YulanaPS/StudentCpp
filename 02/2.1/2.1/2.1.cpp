#include <stdio.h>
#include <string.h>
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int calculation(char sym, int a, int b)
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
	char input[100];
	int constants[100];
	int i = 0;
	int k = 0;

	cout << "Input constants\n";
	gets_s(input);
	cout << input[0];

	while (strcmp(input, "end") != 0)
	{
		constants[i] = 0;

		if (input[0] != '-')
		{
			for (int j = strlen(input); j > 0; j--)
			{
				constants[i] = constants[i] + ((int)input[j - 1] - 48)* pow(10, k);
				k++;
			}

			i++;
			k = 0;
		}

		else
		{
			for (int j = strlen(input); j > 1; j--)
			{
				constants[i] = constants[i] + ((int)input[j - 1] - 48)* pow(10, k);
				k++;
			}

			constants[i] = (-1) * constants[i];
			i++;
			k = 0;
		}

		gets_s(input);
	}

	cout << "Input operations\n";
	int maxsize = 100;
	cin.getline(input, maxsize);

	int n = i - 1;
	i = 0;
	int result = constants[i];

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


