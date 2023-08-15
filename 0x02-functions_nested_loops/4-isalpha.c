#include "main.h"
/**
 * _isalpha - entry point check the latter
 * @c: The character to print
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
			else
			{
				return (0);
			}


}
