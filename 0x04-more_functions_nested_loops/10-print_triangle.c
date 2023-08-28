#include "main.h"
/**
 * print_triangle -  function that prints a triangle,
 * @size:  is the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (i >= j)
			{
				_putchar ('#');
			}
			else
			{
				_putchar (' ');
			}

		}
		_putchar ('\n');
	}
}