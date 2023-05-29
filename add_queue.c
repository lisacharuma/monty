#include "monty.h"

/**
 * add_queue - adds node at the end
 * @stack: ptr to first element
 * @n: node value
 * Return: void
 */

void add_queue(stack_t **stack, int n)
{
	stack_t *temp;
	stack_t *new_node = malloc(sizeof(stack_t));

	temp = *stack;
	if (new_node == NULL)
		malloc_error();
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*stack = new_node;
		new_node->prev = temp;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
