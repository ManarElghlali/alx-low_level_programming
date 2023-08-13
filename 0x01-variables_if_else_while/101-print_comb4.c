#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, m, j;

	for (n = 0; n < 9; n++)
	{

		for (m = n + 1; m < 10; m++)
		{
			for (j = m + 1; j < 10; j++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((j % 10) + '0');
					if (n == 7 && m == 8 && j == 9)
						continue;
			putchar(',');
			putchar(' ');
			}
		}

	}

	putchar('\n');

	return (0);
}
