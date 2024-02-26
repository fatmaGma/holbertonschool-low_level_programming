#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 10)
			_putchar('0' + j / 10);
		_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
