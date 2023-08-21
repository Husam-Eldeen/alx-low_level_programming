#include "main.h"

/**
 * swap_int - function swaps the values
 * of two integers.
 * @a: int to swap
 * @b: int to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

