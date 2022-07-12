#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: input integer pointer
 * @b: input integer pointer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
