#include "lists.h"
/**
 * list_len - return the number of elements
 * in a linked list.
 * @h: points to the struct.
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int elem;

	elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
