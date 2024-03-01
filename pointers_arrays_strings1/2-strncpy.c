#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string.
 * @dest: char
 * @src: char
 * @n: integer
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src != '\0' && n > 0)
	{
		*p++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*p++ = '\0';
		n--;
	}
	return (dest);
}
