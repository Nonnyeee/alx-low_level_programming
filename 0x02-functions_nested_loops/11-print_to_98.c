#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints from any interger to 98
 * @n: interger input
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
