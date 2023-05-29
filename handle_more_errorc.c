#include "monty.h"

/**
 * pint_error - new function
 * Description: handles pint error on empty stack
 * @line_number: line in wc error occured
 * Return: exit failure
 */

int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty", line_number);
	fclose(val.file);
	free(val.line_c);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - new function
 * Description: handles pop error on empty stack
 * @line_number: line in wc error occured
 * Return: exit failure
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack", line_number);
	fclose(val.file);
	free(val.line_c);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * handle_op_errors - new function
 * Description: handles ALL errors arising in maths operations
 * @line_number: line in whic the error occured
 * @op: ptr to operation
 * Return: exit failure
 */

int handle_op_errors(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short", line_number, op);
	exit(EXIT_FAILURE);
}

/**
 * div_by_zero - new function
 * Description: handles division by zero
 * @line_number: line where error occured
 * Return: exit failure
 */

int div_by_zero(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero", line_number);
	exit(EXIT_FAILURE);
}


