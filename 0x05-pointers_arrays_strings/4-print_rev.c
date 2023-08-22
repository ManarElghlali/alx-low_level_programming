#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return always 0.
 */

void print_rev(char *s)
{
	int i, leng;

	leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	for (i = leng - 1; i >= 0; i--)
	{
		_putchar([s]);

	}
	_putchar ('\n');
}
