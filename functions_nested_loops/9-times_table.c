#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (x < 10)
			{
				_putchar(' ');
				_putchar('0' + x);
			}
			else
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
