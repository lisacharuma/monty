#include "monty.h"

/**
 * push_opcode - new function
 * Description - performs push opcode
 * @stack: ptr to stack ptr
 * @line_number: line in wich value is inseted
 * Return: void
 */
void push_opcode(stack_t **stack, unsigned int line_number)
{
	int i = 0, flag = 0, n;

	if (val.arg)
	{
		if (val.arg[0] == '-')
			i++;
		for (; val.arg[i] != '\0'; i++)
		{
			if (val.arg[i] > 57 || val.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
			no_int_error(line_number);
	}
	else
		no_int_error(line_number);
	n = atoi(val.arg);
	if (val.flag_c == 0)
		add_node(stack, n);
	else
		add_queue(stack, n);
}
