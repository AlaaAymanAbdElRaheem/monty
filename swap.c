#include "moty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the head node
 * @line_number: unused argument
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack, *last = (*stack)->next;
	(void) line_number;

	if (check_len(*stack) < 2)
	{
		printf("L<line_number>: can't swap, stack too short");
		exit(EXIT_FAILURE);
	}

	top->next = last->next;
	last->next = top;
	top->prev = last;
	last->prev = NULL;
	*stack = last;

}
