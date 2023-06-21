#include "monty.h"

/**
 * pall - prints all the elements of the stack.
 * @stack: pointer to thehead node
 * @line_number: unused argument
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;

	if (stack == NULL || *stack == NULL)
		return;

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
