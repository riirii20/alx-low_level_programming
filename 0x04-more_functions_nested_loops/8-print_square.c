#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: an input integer
 */
void print_square(int size)
{
	int r, a;

	if (size < 0)
	{
		for (r = 0; r < size; r++)
		{
			_putchar('#');
			for (a = 0; a < size; a++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
