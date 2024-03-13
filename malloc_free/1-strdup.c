#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - that returns a pointer to a newly allocated space in memory
 * @str: pointer of char
 * Return: char
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len;
	size_t i;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	duplicate = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	
	for (i = 0; i < len; i++)
		duplicate[i] = str[i];
	duplicate[len] = '\0';

	return (duplicate);
}
