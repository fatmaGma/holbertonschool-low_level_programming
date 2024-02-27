#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: char
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	
	len = 0;
	while (s[len] != '\0')
		len++;

	char revs[len + 1];
	int i;

	for (i = len - 1; i >= 0; i--)
	 	revs[len -1 -i] = s[i];
	revs[len] = '\0';

}
