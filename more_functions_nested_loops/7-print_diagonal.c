#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;

	i = 1;
	while (i < n && n <= 0)
	{
		_putchar(' ');
		i++;
	}
	if (i == n)
		_putchar('\\');
	_putchar('\n');
}
