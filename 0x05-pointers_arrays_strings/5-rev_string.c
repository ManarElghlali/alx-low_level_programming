#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: string
 * Return alway 0.
 *
 */

void rev_string(char *s)
{
	int a, b, leng;
	char tmp;

	leng = 0;
	while (s[leng] != 0)
	{
		leng++;
	}


	for ((a = 0; (b = leng - 1); a < b) a++; b--)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
	}
	_putchar('\n');


}
