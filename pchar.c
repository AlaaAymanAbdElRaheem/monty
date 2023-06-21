#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: pointer to the head
 * @line_number: unused argument
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (stack == NULL || *stack == NULL)
		print_error(3, "L", &global_var.line_number, ": can't pchar, stack empty");
	else if ((*stack)->n < 0 || (*stack)->n > 127)
		print_error(3, "L", &global_var.line_number,
			    ": can't pchar, value out of range");
	else
		printf("%c\n", (*stack)->n);
}
