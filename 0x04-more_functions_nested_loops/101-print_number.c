#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int ri = n;

	if (n < 0)
	{
		_putchar('-');
		ri = -ri;
	}

	if ((ri / 10) > 0)
		print_number(ri / 10);

	_putchar((ri % 10) + '0');
}
