#include "main.h"
/**
 * puts_half - function that prints half of a string.
 * @str: is tring of ch
 * Return always 0.
 */

void puts_half(char *str)
{
	int i, mid, leng;

	leng = strlen(str);
	mid = (leng - 1) / 2;

	for (i = mid + 1; i < leng; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
