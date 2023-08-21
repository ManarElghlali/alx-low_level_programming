#include "main.h"
/**
 * puts_half - function that prints half of a string.
 * @str: is tring of ch
 * Return always 0.
 */

void puts_half(char *str)
{
	int mid, leng;

	leng = 0;
	while (str[leng] != 0)
	{
		leng++;
	}

	mid = leng / 2;

	if (leng % 2 == 1)
		mid++;

	while (mid < leng)
	{
		_putchar(str[mid]);
		mid++;

	}
	_putchar('\n');
}
