#include "main.h"

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
