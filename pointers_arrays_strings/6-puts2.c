#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if ( i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
