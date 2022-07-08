#include "main.h"

/**
 * more_numers - prints more numbers
 */
void more_numbers(void)
{
	int r, a;

	for (r = 0; r < 10; r++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
