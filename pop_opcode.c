#include "monty.h"

/**
 * pop_opcode - new function
 * Description: removes top element
 * @stack: ptr to first element
 * @line_number: line number
 * Return: void
 */

void pop_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (*stack == NULL)
		pop_error(line_number);
	h = *stack;
	*stack = h->next;
	free(h);
}
