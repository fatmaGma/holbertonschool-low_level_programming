#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - check the code
 * @s: char
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else 
		s++;
	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (*s - '0' > (INT_MAX % 10))))
			return ((sign == -1) ? INT_MIN : INT_MAX);
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
