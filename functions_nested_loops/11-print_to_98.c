#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int i;
	char buffer[12];
	int length;

	for (i = n; i < 99; i++)
	{
		length = sprintf(buffer, "%d", i);
		write(STDOUT_FILENO, buffer, length);
		if (i != 98)
		{
			write(STDOUT_FILENO, ", ", 2);
		}
	}
	write(STDOUT_FILENO, "\n", 1);
}
