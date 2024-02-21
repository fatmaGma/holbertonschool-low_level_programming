#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, %d\n", n);
		return (1);
	}
	else if (n == 0)
	{
		printf("0, %d\n", n);
		return (0);
	}
	else
	{
		printf("-, %d\n", n);
		return (-1);
	}
}
