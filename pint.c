#include "monty.h"

/**
 * pint - prints the value at the top of the stack.
 * @stack: pointer to thehead node
 * @line_number: unused argument
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack)
		printf("%d\n", (*stack)->n);
	else
		print_error_line("can't pint, stack empty", line_number);
}
