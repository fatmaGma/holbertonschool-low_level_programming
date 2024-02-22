#include "main.h"
#include <stdio.h>
#include <unistd.h>

int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;
	if (n >= 0)
	{
		last_digit += '0';
		_putchar(last_digit);
	}	
	else
	{
		last_digit *= -1;
                last_digit += '0';
		_putchar(last_digit);

	}
	return (last_digit);
}
