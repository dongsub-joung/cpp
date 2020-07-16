#include <iostream>
#include "pch.h"
using namespace std;

class Calculator
{
public:

	int add(int x, int y)
	{
		return x + y;
	}

	int sub(int x, int y)
	{
		return x - y;
	}

	int div(int x, int y)
	{
		int sum = 0;

		if (x < y)
		{
			int p = 0;
			p = x;
			x = y;
			y = p;
		}

		sum = x / y;

		return sum;
	}

	int mult(int x, int y)
	{
		return x * y;
	}

	int factorial(int x)
	{
		int i;
		int sum = 1;

		for (i = 1; i <= x - 1; ++i)
		{
			sum = sum * i;
		}

		return sum * x;
	}
};

int main(void)
{
	Calculator cal;

	cal.add(3, 5);
	cal.sub(-1, 4);
	cal.div(4, 2);
	cal.factorial(4);


}