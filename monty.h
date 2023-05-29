#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct carry_val - carry values through the program
 * @arg: value passed
 * @file: monty file
 * @line_c: line content
 * @flag_c: flag
 */
typedef struct carry_val
{
	char *arg;
	FILE *file;
	char *line_c;
	int flag_c;
} carry_value;

extern carry_value val;

/*ERROR HANDLERS*/
int usage_error(void);
int file_open_error(char *filename);
int malloc_error(void);
int no_int_error(unsigned int line_number);
int pint_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int pop_error(unsigned int line_number);

/*OPCODES*/
void free_stack(stack_t *stack);
void push_opcode(stack_t **stack, unsigned int line_number);
void pall_opcode(stack_t **stack, unsigned int line_number);
void pint_opcode(stack_t **stack, unsigned int line_number);
void pop_opcode(stack_t **stack, unsigned int line_number);
void swap_opcode(stack_t **stack, unsigned int line_number);
void add_opcode(stack_t **stack, unsigned int line_number);
void nop_opcode(stack_t **stack, unsigned int line_number);
int execute_op(char *line_c, stack_t **stack, unsigned int line_number,
                FILE file);
void add_node(stack_t **stack, int n);
void add_queue(stack_t **stack, int n);
#endif
