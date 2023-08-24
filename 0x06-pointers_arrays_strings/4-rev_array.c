#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: arry
 * @n: number of element
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
