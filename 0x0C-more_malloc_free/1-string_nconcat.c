#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	new_string = malloc(lens1 + n + 1);
	if (new_string == NULL)
		return (NULL);

	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			new_string[i] = *s1, s1++;
		else
			new_string[i] = *s2, s2++;
	}
	new_string[i] = '\0';
	return (new_string);
}
