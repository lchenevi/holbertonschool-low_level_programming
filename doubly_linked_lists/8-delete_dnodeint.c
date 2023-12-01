#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: pointer to the address of the head of the doubly linked list
 * @index: index of the node that should be deleted (starting from 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);  /*Return -1 if the list is empty or the head pointer is NULL*/
	}

	current = *head;

	if (index == 0)
	{
		/*Delete the first node*/
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);  /*Return -1 if the index is out of bounds*/
	}

	temp = current->prev;
	temp->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = temp;
	}
	free(current);

	return (1);
}
