#include "monty.h"

/**
 * usage_error - new function
 * Description: validates args passed to the program
 * Return: exits with failure every time
 */

int usage_error(void)
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
	fclose(val.file);
	free(val.line_c);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - handles pop errors
 * @line_number: line with error
 * Return: exit failure
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        fclose(val.file);
        free(val.line_c);
        free_stack(stack);
        exit(EXIT_FAILURE);
