#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: integer
 * @argv: string
 * Return: integer
 * **/
int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc < 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			sum *= atoi(argv[i]);
		printf("%d", sum);
		printf("\n");
		return (0);

	}
}
