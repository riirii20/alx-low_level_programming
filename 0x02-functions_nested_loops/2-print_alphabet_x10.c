#include "main.h"

/**
 * print_alphabet_x10- prints 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char r;

	for (r = 0; r < 10; r++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
