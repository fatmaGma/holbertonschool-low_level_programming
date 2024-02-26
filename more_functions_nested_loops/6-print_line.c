#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: integer
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i > 0)
		{
			_putchar('_');
			if (i == n - 1)
				_putchar('\n');
		}
		else 
			_putchar('\n');
	}
}
