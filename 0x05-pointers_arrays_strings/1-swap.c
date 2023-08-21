#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: first int
 * @b: scend int
 * j: int value fo swap
 *
 */
void swap_int(int *a, int *b)
{
	int j;

		j = *a;
		*a = *b;
		*b = j;

}
