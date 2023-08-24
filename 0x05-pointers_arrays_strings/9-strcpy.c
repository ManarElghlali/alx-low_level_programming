#include "main.h"
/**
 * *_strcpy -  function that copies the string pointed to by src
 * @dest: int buffer pointer
 * @src: int string pointer
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *orgn = dest;

	while (*src != 0)
	{
		*dest = *src;
			dest++;
			src++;
	}
	*dest = '\0';
	return (orgn);
}
