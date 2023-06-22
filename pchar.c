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
		print_error_line("can't pchar, stack empty", line_number);
	else if ((*stack)->n < 0 || (*stack)->n > 127)
		print_error_line("can't pchar, value out of range", line_number);
	else
		printf("%c\n", (*stack)->n);
}
