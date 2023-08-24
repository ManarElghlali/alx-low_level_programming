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
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			z = x * j;

			if (z <= 9)
				_putchar (' ');

			else
				_putchar ((z / 10) + '0');

			_putchar ((z % 10) + '0');
		}
		_putchar ('\n');
	}
}
