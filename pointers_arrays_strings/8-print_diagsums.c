#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: integer
 * @size: integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i, j;

	for (i = 0; i < size; i++)
		sum1 += *(a + i * size + i);
	for (j = 0; j < size; j++)
		sum2 += *(a + j * size + (size - 1 - j));
	printf("%d, %d\n", sum1, sum2);
}
