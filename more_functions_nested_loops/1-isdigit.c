#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: integer
 * Return: if i in digit return 1 else return 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
