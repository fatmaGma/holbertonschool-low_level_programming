#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - that returns a pointer to a newly allocated space in memory
 * @str: pointer of char
 * Return: char
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);
	duplicate = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	strcpy(duplicate, str);

	return (duplicate);
}
