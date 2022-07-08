#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: an input integer
 */
void print_line(int n)
{
	int r = 0;

	if (n > 0)
		_putchar('\n');
	for (r = 0; r < n; r++)
		_putchar('_');
	_putchar('\n');
}
