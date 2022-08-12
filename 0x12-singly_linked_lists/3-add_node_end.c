#include "lists.h"
/**
 * add_node_end - new node at the end of a linked list
 * @head: head of the list
 * @str: string in the struct
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwnod;
	list_t *fin = *head;
	int newelem = 0;

	nwnod = malloc(sizeof(list_t));

	if (nwnod == NULL)
	{
		return (NULL);
	}

	nwnod->str = strdup(str);

	nwnod->next = NULL;

	if (*head == NULL)
	{
		*head = nwnod;
	}
	else
	{
		while (fin->next != NULL)
		{
			fin = fin->next;
		}
		fin->next = nwnod;
	}

	while (str[newelem])
	{
		newelem++;
	}
	nwnod->len = newelem;
	return (nwnod);
}
