#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter s
 */
void rev_string(char *s)
{
	char temp;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[lemgth1] != '\0')
		length1++;

	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
