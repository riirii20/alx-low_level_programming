#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * Return: 1 if the character is lowercase, 0 if not
 */
int _islower_l(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
