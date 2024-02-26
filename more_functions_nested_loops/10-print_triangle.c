#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: integer
 * Return: void
 */
void print_triangle(int size)
{
	int l;
	int c;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c <= size - (l + 2); c++)
				_putchar(' ');
			for (c = 0; c <= l; c++)
				_putchar('#');
			_putchar('\n');
		}
		}
	else
		_putchar('\n');
}
