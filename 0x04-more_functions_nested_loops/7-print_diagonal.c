#include "main.h"

/**
 * print_diagonal - a function that draws aa diagonal line
 * @n: an input integer
 */
void print_diagonal(int n)
{
	int r = 0, a;

	if (n > 0)
	{
		for (; r < n; r++)
		{
			for (a = 0; a < r; a++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


