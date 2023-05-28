#include "monty.h"

/**
 * validate_args - new function
 * Description: validates args passed to the program
 * Return: exits with failure every time
 */

int validate_args(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_open_error - new function
 * Description: exits program when opening fails
 * @filename: file that can't be opened
 * Return: exits failure
 */

int file_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * instruction_error - new function
 * Description: exits te program when unkown instruction is passed
 * @line_number: line where error occured
 * @opcode: instruction
 * Return: exit failure
 */

int instruction_error(unsigned int line_number, char *opcode)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - new function
 * Description: called wen you can not malloc anymore
 * Return: exit failure
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * no_int_error - new function
 * Description: handles non-integer args
 * @line_number: line where error occured
 * Return: exit failure
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
