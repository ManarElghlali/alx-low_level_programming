#include "main.h"

/**
 * _strstr - function used to find the first occurrence of
 * a specified substring within a given null-terminated string.
 * @haystack:  A pointer to the null-terminated
 * string in which to search for the substring
* @needle: A pointer to the null-terminated
 * string that represents the substring to be found
 * Return: a null pointer
 *
 */
char *_strstr(char *haystack, char *needle)
{

	int index;

	if (*haystack == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
