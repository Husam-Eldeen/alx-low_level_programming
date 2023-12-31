#include "main.h"

/**
 * factorial - function that returns the
 * factorial of a given number.
 * @n: number to find it's factorial
 * Return: factorial
 */

int factorial(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		x = n * factorial(n - 1);
		return (x);
	}
}
