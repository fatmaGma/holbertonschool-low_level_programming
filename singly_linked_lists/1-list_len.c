#include <stdio.h>
#include "lists.h"
/**
 * list_len - return the number of elements in a linked list_t list
 * @h: list_t
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != 0)
	{
		count++;
		current = current->next;
	}
	return (count);
}
