#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string be compare with.
 * @s2: string to be compared to.
 * Return: 0 if strings are equal,
 * less than 0 if the first is shorter
 * mare than 0 if the first is longer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 != '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

