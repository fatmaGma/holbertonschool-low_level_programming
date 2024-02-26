#include <stdio.h>
/**
 * fizz_buzz - function
 * Return: void.
 */
int main ()
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else 
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
