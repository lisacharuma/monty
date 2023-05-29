#include "monty.h"

/**
 * pint_opcode - new function
 * Description: prints the top
 * @stack: ptr to ptr to first item
 * @line_number: line number
 * Return: void
 */

void pint_opcode(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n",
				line_number);
		fclose(val.file);
		free(val.line_c);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
