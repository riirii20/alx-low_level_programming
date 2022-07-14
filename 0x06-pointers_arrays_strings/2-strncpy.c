#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: a pointer exactly like strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
