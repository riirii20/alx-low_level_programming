#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle #
 */
void print_triangle(int size)
{
	int ra, aa, ar;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (aa = 0; aa <= (size - 1); aa++)
		{
			for (ra = 0; ra < (size - 1) - aa; ra++)
			{
				_putchar(' ');
			}
			for (ar = 0; ar <= aa; ar++)
			{

				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
