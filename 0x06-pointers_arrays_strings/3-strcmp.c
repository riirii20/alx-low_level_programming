#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: an input string
 * @s2: an input string
 * Return: works exactly like strcmp
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
