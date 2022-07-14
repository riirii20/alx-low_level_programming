#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: an input strings
 * @src: an input string
 * @n: an input integer
 * Result: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
