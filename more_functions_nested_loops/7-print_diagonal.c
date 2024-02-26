#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			j = 0;
			while (j != n)
			{
				for (i = 1; i <= j; i++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
				j++;
			}
		}
	}
	else
		_putchar('\n');
}
