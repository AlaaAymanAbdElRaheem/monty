#include "monty.h"

/**
 * pop - deletes the top node of the stack
 * @stack: pointer to the head node
 * @line_number: index of the node
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void) line_number;

	if (*stack == NULL)
	{
		printf("L<line_number>: can't pop an empty stack");
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	if (temp->next != NULL)
		temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
