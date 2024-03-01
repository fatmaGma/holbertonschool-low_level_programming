#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: char
 * Return: void
 */
void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = 0;
	while (s[len] != '\0')
		len++;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
