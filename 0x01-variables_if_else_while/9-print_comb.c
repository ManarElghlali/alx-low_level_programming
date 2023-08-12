#include <stdio.h>
/**
 * main - entry point that prints all possible combinations of single-digit
 * Return: Always 0 (Success)
 */
	int main(void)
{

	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x + '0');
	putchar(',');
	putchar(' ');
	return (0);
}
