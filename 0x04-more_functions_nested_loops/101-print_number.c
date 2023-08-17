#include <stdio.h>
#include "main.h"
/**
 * print_number  function that prints an integer.
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n != 0)
	{	
		print_number(n / 10);
			_putchar((n % 10) + '0');
	}
	else if ( n < 0)
	{
		_putchar ('-');
			n = -n;
	
	}
	else
	{
		_putchar ('0');
	}

}
