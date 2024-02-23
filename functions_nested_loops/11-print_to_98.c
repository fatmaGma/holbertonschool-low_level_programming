#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int i;
	char buffer[12];

	for (i = n; i < 99; i++)
	{
		int temp = i;
		int count = 0;
		int j;

		while (temp != 0)
		{
			temp /= 10;
			count++;
		}
		for (j = count - 1; j >= 0; j--)
		{
			buffer[j] = i % 10 + '0';
			i /= 10;
		}
		for (j = 0; j < count; j++)
			_putchar(buffer[j]);
		if (i + 1 != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		i = temp;
	}
	_putchar('\n');
}
