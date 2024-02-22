#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (x < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (x >= 10 && x < 100)
			{
				_putchar(' ');
			}
			if (x == 0)
				_putchar('0');
			else
			{
				while (x != 0)
				{
					_putchar('0' + x % 10);
					x /= 10;
				}
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
	_putchar('\n');
	}
}
