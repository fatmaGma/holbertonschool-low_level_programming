#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string.
 * @s: char
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
