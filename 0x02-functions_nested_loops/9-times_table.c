#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 *Return: Always 0.
 */
void times_table(void)
{
	int x, j, z;

	for (x = 0; x <= 9; x++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = x * j;
			if (j != 0)
			{
				_putchar (',');
				_putchar (' ');
			}
			if (z <= 9)
				_putchar (' ');
			else
				_putchar ((z / 10) + '0');

			_putchar ((z % 10) + '0');
		}
		_putchar ('\n');
	}
}
