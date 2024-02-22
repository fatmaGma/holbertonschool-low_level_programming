#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: integer
 * Return: if c in ['a' .. 'z'] 1, else return 0.
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
