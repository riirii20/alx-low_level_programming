#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: an input strings
 * @src: an input string
 * @n: an input integer
 * Result: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
