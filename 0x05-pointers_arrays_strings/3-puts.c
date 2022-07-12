#include "main.h"

/**
 * _puts - function that prints a string
 * @str: an input string
 */
void _puts(char *str)
{
	while (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
