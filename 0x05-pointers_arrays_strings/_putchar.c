#include "main.h"

/**
 * main - Print _putchar
 * @c: the charecter to print
 * return: on success 1
 * on error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

