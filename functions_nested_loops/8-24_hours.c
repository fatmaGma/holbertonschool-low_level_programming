#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h, mn;

	for (h = 0; h < 24; h++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			printf("%.2d:%.2d\n", h, mn);
		}
	}
}
