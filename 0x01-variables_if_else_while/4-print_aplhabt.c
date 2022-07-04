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
char r , e, f,;

e = 'f';
f = 'f';

for (r = 'a'; r <= 'z'; r++)
{
if (r != e && r != f)
putchar(r);
}
putchar('\n');

return (0
}
