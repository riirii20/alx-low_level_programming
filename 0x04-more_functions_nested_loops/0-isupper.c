#include "main.h"

/**
 * _isupper - A function that checks for uppercase letters
 * @c: an input character
 * Return: 1 if c is uppercase or 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
