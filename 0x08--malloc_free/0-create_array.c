#include "main.h"

/**
 * create_array -> creating array
 * @size: size of the array to be created
 * @c: character an aray is initialized with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c);
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
