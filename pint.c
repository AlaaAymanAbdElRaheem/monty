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
	{
		printf("L<line_number>: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
}
