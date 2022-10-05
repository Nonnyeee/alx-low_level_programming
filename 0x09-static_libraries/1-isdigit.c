#include "main.h"

/**
 * _isdigit - checks if parameter is a digit between 0 and 9
 * @c: input number
 * Return: 1 if the number is between 0 to 9, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
