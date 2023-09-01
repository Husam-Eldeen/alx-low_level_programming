#include "main.h"

/**
 * _stcat - function that concatenates two strings.
 * @dest: The destination string
 * @src: the source string
 * Returns: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return dest;
}
