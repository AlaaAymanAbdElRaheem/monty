#include "monty.h"

/**
 * rotl - The top element of the stack becomes the last one
 * @stack: pointer to the head
 * @line_number: unused argument
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *curr = *stack, *top = (*stack)->next;
	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	while (curr->next != NULL && curr != NULL)
		curr = curr->next;

	curr->next = temp;
	temp->prev = curr;
	temp->next = NULL;
	*stack = top;
	(*stack)->prev = NULL;
}
