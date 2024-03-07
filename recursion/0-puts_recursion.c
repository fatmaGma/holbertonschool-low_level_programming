#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: char
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
