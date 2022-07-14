#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: content
 * @n: content
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
