#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - check the code
 * @start: integer
 * @end: integer
 * @n: integer
 * Return: integer.
 * _sqrt_recursion - check the code
 */

int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (start > end)
		return (-1);

	if (square == n)
		return (mid);
	else if (square < n)
		return (find_sqrt(n, mid + 1, end));
	else
		return (find_sqrt(n, start, end - 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0, n));
}
