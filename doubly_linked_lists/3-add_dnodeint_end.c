#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @n: value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);  /*Return NULL if memory allocation fails*/
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/*If the list is empty, make the new node the head*/
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/*Find the last node and link the new node*/
		dlistint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
		new_node->prev = last;
	}
	return (new_node);
}
