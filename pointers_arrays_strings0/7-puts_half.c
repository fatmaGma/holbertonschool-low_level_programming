#include "main.h"

/**
 * puts_half - prints half of a string,
 * @str: char
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len / 2 + (len % 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
