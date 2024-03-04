#include "main.h"
#include <stdio.h>
/**
 * *_strstr - function that locates a substring.
 * @haystack: char
 * @needle: char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
