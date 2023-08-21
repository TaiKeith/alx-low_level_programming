#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;
	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
