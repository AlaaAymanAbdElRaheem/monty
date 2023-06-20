#include "moty.h"

/**
 * pall - prints all the elements of the stack.
 * @top: pointer to thehead node
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void) line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
