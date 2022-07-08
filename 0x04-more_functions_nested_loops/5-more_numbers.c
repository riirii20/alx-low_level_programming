#include "main.h"

/**
 * more_numers - prints more numbers
 */
void more_numbers(void)
{
	int r, a;

	for (r = 0; r < 10; r++)
	{
		for (a = 0; a < 10; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}
