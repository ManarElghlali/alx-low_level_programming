#include "main.h"

/**
 * _memset - function that is used to copy a specified 
 * number of bytes from one memory location to another.
 * @s: A pointer to the destination memory where the data will be copied.
 * @b: A pointer to the source memory from where the data will be copied.
 * @n: The number of bytes to be copied from the source to the destination.
 *
 * Return: new value for bytes n.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return(s);
}
