#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagnal
 * @a: data type int
 * @size: the size of matrix
 */

void print_diagsums(int *a, int size)
{
	int indx, sum1 = 0, sum2 = 0;

	for (indx = 0; indx < size; indx++)
	{
		sum1 += a[indx];
		a += size;
	}

	a -= size;

	for (indx = 0; indx < size; indx++)
	{
		sum2 += a[indx];
		sum2 -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
