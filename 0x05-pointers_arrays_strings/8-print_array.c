#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an inputted number of elements of an array of intergers
 * @a: array of intergers
 * @n: number of elements to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);

	}
	printf(10);
}
