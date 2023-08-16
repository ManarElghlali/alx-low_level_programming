#include "main.h"
#include <stdio.h>
/**
 * print_to_98 print numbers from n to 98
 *
 * Return always 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{	
		for (; n >= 98 ; n--)
		{
			printf ("%d", n);
		
			if (n != 98)
			{
			printf (", ");
		
			}	
		}		
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
		
			printf ("%d", n);
		
			if (n != 98)
			{
			printf (", ");
			}
		}
	}
	else
	{
	printf ("98");
	}

	printf("\n");
}
