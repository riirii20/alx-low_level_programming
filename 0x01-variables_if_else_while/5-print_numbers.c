#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int r;

	for (r = 0; r < 10; r++)
		printf("%d", r);
	printf("\n");

	return (0);
}
