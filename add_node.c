#include "monty.h"

/**
 * add_node - adds new node
 * @stack: ptr to first element
 * @n: node value
 * Return: void
 */

void add_node(stack_t **stack, int n)
{
	stack_t *temp;
	stack_t *new_node = malloc(sizeof(stack_t));

	temp = *stack;
	if (new_node == NULL)
		malloc_error();
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
