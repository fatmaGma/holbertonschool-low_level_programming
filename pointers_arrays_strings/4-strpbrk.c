#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: char
 * @accept: achar
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
				return s;
			ptr++;
		}
		s++;
	}
	return (NULL);
}
