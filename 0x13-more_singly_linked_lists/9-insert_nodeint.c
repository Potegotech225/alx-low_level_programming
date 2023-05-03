#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in the linked list,
 * at a position
 * @head: pointer to first node in the list
 * @idx: index where the new node was added
 * @n: data to be insert in the new node
 *
 * Return: pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int h;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (h = 0; temp && h < idx; h++)
	{
		if (h == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
