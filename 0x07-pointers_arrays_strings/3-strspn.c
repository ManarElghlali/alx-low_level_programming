#include "main.h"

/**
 * _strspn - function that calculates the length of a substring 
 * within a string that consists entirely of characters 
 * @s: A pointer to the null-terminated string that you want to analyze
 * @accept: A pointer to the null-terminated string containing the set 
 * of characters to search for.
 * Return: always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int  n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s== accept[i])
			{
				n++;
				break;
			}
			else if (accept[i = 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
