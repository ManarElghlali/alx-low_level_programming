#include <stdio.h>
/**
 * main - entry point that prints all possible combinations of single-digit
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

