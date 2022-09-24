#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int count = 0, i;
	int sep_words[] = {32 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

        	
