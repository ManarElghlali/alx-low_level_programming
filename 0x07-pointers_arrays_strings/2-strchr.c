#include "main.h"

/**
 * _strchr - used to find the first occurrence of a specified character
 * in a given null-terminated string
 * @s: A pointer to the null-terminated string in which to search for
 * the character.
 * @c: The character to search for, specified as an integer value
 *
 * Return: always 0.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
