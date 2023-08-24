#include "main.h"
/**
 * print_alphabet - Entry point to print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ltr;
		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
			_putchar (ltr);
		}
			_putchar ('\n');

}
