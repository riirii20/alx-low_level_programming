#include "main.h"

/**
 * jack_bauer - prints 24 hours
 * Description: function prints every minute
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int R, A;

	for (R = 0; R < 24; R++)
	{
		for (A = 0; A < 60; A++)
		{
			_putchar((R / 10) + '0');
			_putchar((R % 10) + '0');
			_putchar(':');
			_putchar((A / 10) + '0');
			_putchar((A % 10) + '0');
			_putchar('\n');
		}
	}
}
