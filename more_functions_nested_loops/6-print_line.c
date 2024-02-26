#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: integer
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n || i <= 0)
			_putchar('\n');
		_putchar('_');
	}
}
