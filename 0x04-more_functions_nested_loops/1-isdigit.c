#include "main.h"

/**
 * _isdigit - function that checks for a digit 0 through 9.
 * @c: is to check the number
 * Return: Always 0.
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
