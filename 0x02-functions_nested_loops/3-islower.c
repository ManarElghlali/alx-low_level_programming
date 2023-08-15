#include "main.h"
/**
 * _islower - enty point to print if ltr is lowercase
 *
 * @c: The character to be checked
 * Return: always 0.
 */


int _islower(int c)
{

	if (c <= 'a')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
