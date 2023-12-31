#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to the head
 * @line_number: unused argument
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	(void) line_number;

	while (curr)
	{
		if (curr->n == 0 || curr->n < 0 || curr->n > 127)
			break;

		printf("%c", curr->n);
		curr = curr->next;
	}
	printf("\n");
}
