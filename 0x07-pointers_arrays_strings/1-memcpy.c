#include "main.h"

/**
 *_memcpy - function that is used to copy a specified number 
 * of bytes from one memory location to another
 * @dest: A pointer to the destination memory where the data will be copied.
 * @src: A pointer to the source memory from where the data will be copied.
 * @n: The number of bytes to be copied from the source to the destination.
 *
 * Return: change memory with n bytes.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);

}
