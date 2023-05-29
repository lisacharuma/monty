#include "monty.h"

/**
 * free_stack - new function
 * Description: frees the stack
 * @head: ptr to head element
 * Return: void
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
