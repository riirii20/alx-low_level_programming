#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: an input integer
 */
void print_square(int size)
{
	int r, a;

	if (size < 0)
		_putchar('\n');
	else
	{
		for (r = 0; r < size; r++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
