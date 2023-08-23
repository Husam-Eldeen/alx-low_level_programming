#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: string to be copied to
 * @src: string to be cobied
 * @n: The number of characters to be copied from source.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++) /** copy characters from src to dest 
						    until n characters are copied or src ends*/
	{
	dest[i] = src[i];
	}
	for (; i < n; i++) /* if the length of src is less than n, pad the remainder of dest with null bytes */
	{
	dest[i] = '\0';
	}
	
	return dest; /* return the destination string */
}

