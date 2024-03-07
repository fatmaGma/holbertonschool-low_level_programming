#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * factorial - check the code
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
