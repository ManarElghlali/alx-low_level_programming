#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: string
 * Return alway 0.
 *
 */

void rev_string(char *s)
{
	int a, leng;
	char tmp = s[0];

	leng = 0;
	while (s[leng] != 0)
	{
		leng++;
	}


	for (a = 0; a < leng ; a++)
	{	leng--;
		tmp = s[a];
		s[a] = s[leng];
		s[leng] = tmp;
	}


}
