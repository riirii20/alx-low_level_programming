#include "main.h"

/**
 * _puts - function that prints a string
 * @str: an input string
 */
void _puts(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
