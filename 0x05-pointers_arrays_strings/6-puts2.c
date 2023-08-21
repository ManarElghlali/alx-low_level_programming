#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * @str: is string int
 * Return alway 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');


}
