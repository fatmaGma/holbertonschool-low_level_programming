#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h, mn;

	for (h = 0; h < 24; h++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
