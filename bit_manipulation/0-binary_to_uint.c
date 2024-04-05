#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to the string containing the binary number
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not '0' or '1', or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int index = 0;

	if (b == NULL)
		return (0);

	while (b[index])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result = (result << 1) + (b[index] - '0');
		index++;
	}

	return (result);
}
