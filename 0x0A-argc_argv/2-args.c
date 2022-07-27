#include <stdio.h>

/**
 * main - A program that prints all arguements it receives
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
