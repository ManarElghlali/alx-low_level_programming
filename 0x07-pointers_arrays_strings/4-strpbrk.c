#include "main.h"

/**
 * _strpbrk - function that searches a given string for the first occurrence
 * @s:  A pointer to the null-terminated string in which to search
 * for characters from the set.
 * @accept: A pointer to the null-terminated
 * string containing the set of characters to search for.
 * Return: always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');

}
