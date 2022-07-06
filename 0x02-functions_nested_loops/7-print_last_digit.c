#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: The number in question
 *
 * Return: Value of the last digit
 */
int print_last_digit(int m)
{
	int m;

	if (m < 0)
		n = -1 * (m % 10);
	else
		n = m % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
