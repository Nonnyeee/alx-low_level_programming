#include "main.h"

/**
 * print_sign - function to check for interger sign
 * @n: int for the argument of the function
 *
 * Return: 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
