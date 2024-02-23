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
		for (i = n; i <= 98; i++)
		{
			if (i < 10 && i >= 0)
			{
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + i);
			}
			else if (i < 0 && i > -10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('-');
				_putchar('0' + (-i));
			}
			else
			{
				if (i != n && i != 99)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (i < 0)
				{
					if (i >-100)
					{
						_putchar('-');
						_putchar('0' + ((-i) / 10));
						_putchar('0' + ((-i) % 10));
					}
					else
					{
						_putchar('-');
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
	_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 10 && i >= 0)
			{
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + i);
				}
			}
			else if (i > 10)
			{
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
				}
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
		_putchar('\n');
	}
}
