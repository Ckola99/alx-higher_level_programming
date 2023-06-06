#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = number;
	new->next = NULL;

	if (*head == NULL || number < (*head)->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		listint_t *current = *head;
		while (current->next != NULL && number >= current->next->n)
		{
			current = current->next;
		}
		new->next = current->next;
		current->next = new;
	}

	return (new);
}
