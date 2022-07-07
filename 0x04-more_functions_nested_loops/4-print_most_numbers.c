#include "main.h"

/**
 * print_most_numbers - prints most numbers
 */
void print_most_numbers(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		if (r !=2 && r !=4)
			_putchar(r + '0');
	}
	_putchar('\n');
}
