#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_last_digit - rints the last digit of a number.
 * @n: integer.
 * Return: last_digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n >= 0)
	{
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit = -last_digit;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
