#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node in linked list at an index
 * @head: pointer the first element in the list
 * @index: index of the node to be delete
 *
 * Return: 1 ( if it's Success), or -1 (if it Fails)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int l = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (l < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		l++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
