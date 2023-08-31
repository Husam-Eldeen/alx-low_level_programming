#include "main.h"

/**
 * pow_recursion -  function that returns the value
 * of x raised to the power of y.i
 * @x: base num
 * @y: power
 * Return: power of x.
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		for (y = 1; y <= x; y++)
		pow = x*x;
	}
	return (pow);
}
