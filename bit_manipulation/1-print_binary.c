#include <unistd.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Unsigned long integer to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	flag = 0;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
