#include "main.h"
#include <stdio.h>
#include <unistd.h>

int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;
	return (last_digit);
}
