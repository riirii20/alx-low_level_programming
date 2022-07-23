#include "main.h"

/**
<<<<<<< HEAD
 * reverse_array - function that reverses the content of an array of integers
 * @a: content
 * @n: content
=======
 * reverse_array - a function that reverses the content of an array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0 (Success)
>>>>>>> 1d4a395f85b51e94979b4776a93f6f99e1f51e84
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
