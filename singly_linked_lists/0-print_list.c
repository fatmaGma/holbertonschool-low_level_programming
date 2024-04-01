#include <stdio.h>
#include "lists.h"
/**
 * print_list - check the code
 * @h: list_t
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str ? current->str : "(nil)");
		count++;
		current = current->next;
	}
	return (count);
}
