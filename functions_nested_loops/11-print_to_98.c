#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		i = n;
		if ((i != n  && i != 99) || (i < 0 && i > -10))
		{
			_putchar(',');
			_putchar(' ');
		}
		for (i = n; i <= 98; i++)
		{
			if (i < 10 && i >= 0)
				_putchar('0' + i);
			else
			{
				if (i < 0)
				{
					_putchar('-');
					if (i > -10)
						_putchar('0' + (-1));
					if (i >-100)
					{
						_putchar('0' + ((-i) / 10));
						_putchar('0' + ((-i) % 10));
					}
					else
					{
						_putchar('1');
						_putchar('0' + (((-i) - 100) / 10));
						_putchar('0' + (((-i) -100) % 10));
					}
				}
				else
				{
					_putchar('0' + (i  / 10));
					_putchar('0' + (i % 10));
				}
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 10 && i >= 0)
				_putchar('0' + i);
			else if (i > 10)
			{
				if (i < 100)
				{
					_putchar('0' + (i / 10));
					_putchar('0' + (i % 10));
				
				}
				else
				{
					_putchar('1');
					_putchar('0' + ((i - 100) / 10));
					_putchar('0' + ((i - 100) % 10));
				}
			}
		}
	}
	_putchar('\n');
}
