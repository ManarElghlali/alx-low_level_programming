#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
		int i, ltr;

		for (i = 0; i <= 10; i++)
		{
			for (ltr = 'a'; ltr <= 'z'; ltr++)
			{
				_putchar (ltr);
			}

		_putchar ('\n');
		}
}
