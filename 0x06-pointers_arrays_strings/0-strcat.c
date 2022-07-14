#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest string
 * @dest: an input string
 * @src: an input string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
