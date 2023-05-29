#include "monty.h"

/**
 * swap_opcode - swaps top two elements of the stack
 * @stack: first element ptr
 * @line_number: line number
 * Return: void
 */

void swap_opcode(stack_t **stack, unsigned int line_number)
{
	int count = 0, temp;
	stack_t *head;

	head = *stack;
	while (head)
	{
		head = head->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n",
				line_number);
		fclose(val.file);
		free(val.line_c);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	head = *stack;
	temp = head->n;
	head->n = head->next->n;
	head->next->n = temp;
}
