#include "main.h"

/**
 * _puts - prints a string to a standard output
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
