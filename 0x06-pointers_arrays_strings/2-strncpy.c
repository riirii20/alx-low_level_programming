#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: a pointer exactly like strncpy
 */
char *_strncpy(char *dest. char *src, int n)
{
	int n;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
