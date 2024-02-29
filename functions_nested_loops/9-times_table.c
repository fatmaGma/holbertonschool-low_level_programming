#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				if (x >= 10)
				{
					_putchar (' ');
					_putchar('0' + (x / 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + x % 10);
			}
		}
		_putchar('\n');
	}
}
