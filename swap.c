#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the head node
 * @line_number: unused argument
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *last;
	(void) line_number;

	if (check_len(*stack) < 2)
		print_error_line("can't swap, stack too short", line_number);
	top = *stack;
	last = top->next;

	top->next = last->next;
	last->next = top;
	top->prev = last;
	last->prev = NULL;
	*stack = last;

}
