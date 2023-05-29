#include "monty.h"

/**
 * add_opcode - adds first two elements
 * @stack: ptr to first element
 * @line_number: line number
 * Return: void
 */

void add_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int count = 0, temp;

	head = *stack;
	while (head)
	{
		head = head->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short",
				line_number);
		fclose(val.file);
		free(val.line_c);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	head = *stack;
	temp = head->n + head->next->n;
	head->next->n = temp;
	*stack = head->next;
	free(head);
}
