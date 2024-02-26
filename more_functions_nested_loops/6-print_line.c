#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: integer
 * Return: void.
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n && n != 0)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
		i++;
	}
	_putchar('\n');
}
