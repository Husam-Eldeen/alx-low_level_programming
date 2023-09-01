#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *@dest: string to be added
 *@src: string to be added to
 *@n: specifies the maximum number of characters
 *to append from the source string.
 *Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';

	return (dest);
}
