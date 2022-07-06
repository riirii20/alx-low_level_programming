#include "main.h"

/**
 * _isalpha - checks for alphabetical orders.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter lowercase or uppercase, if not 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
