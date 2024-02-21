#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int print_last_digit(int n)
{
	int last_digit;
	
	srand(time(0));
	last_digit = n % 10;
	return (last_digit);
}
