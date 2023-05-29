#include "monty.h"

/**
 * pall_opcode - new function
 * Description: prints stack
 * @stack: ptr to first element on the stack
 * @line_number: line in use
 * Return: void
 */

void pall_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)line_number;
	head = *stack;
	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
