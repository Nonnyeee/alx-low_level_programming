#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of numbers followed by a new line
 * @argc: The number of the arguments supplied to the program
 * @argv: an array or pointers to the argument
 * Return: If the program recieves two arguments, 0; Otherwise -1
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
