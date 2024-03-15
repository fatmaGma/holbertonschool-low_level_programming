#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;
	
	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';
	return (duplicate);
}

