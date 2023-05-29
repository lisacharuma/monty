#include "monty.h"

/**
 * execute_op - execute opcode
 * @stack: ptr to first element
 * @line_c: content
 * @line_number: line number
 * @file: monty file
 * Return: 1 on success
 */

int execute_op(char *line_c, stack_t **stack, unsigned int line_number,
		FILE file)
{
	instruction_t opst[] = {
		{"push", push_opcode},
		{"pall", pall_opcode},
		{"pint", pint_opcode},
		{"pop", pop_opcode},
		{"swap", swap_opcode},
		{"add", add_opcode},
		{"nop", nop_opcode},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(line_c, " \n\t");
	if (op && op[0] == '#')
		return (0);
	val.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, line_number);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
				line_number, op);
		fclose(&file);
		free(line_c);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
