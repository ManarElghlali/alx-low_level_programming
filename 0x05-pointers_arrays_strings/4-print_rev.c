#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return always 0.
 */

void print_rev(char *s)
{
	int i, j, leng;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	leng = j;

	for (i = leng - 1; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar ('\n');
}
