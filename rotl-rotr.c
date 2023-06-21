#include "monty.h"

/**
 * rotl - The top element of the stack becomes the last one
 * @stack: pointer to the head
 * @line_number: unused argument
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *curr, *top;
	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	temp = *stack;
	curr = *stack;
	top = (*stack)->next;
	while (curr->next != NULL && curr != NULL)
		curr = curr->next;

	curr->next = temp;
	temp->prev = curr;
	temp->next = NULL;
	*stack = top;
	(*stack)->prev = NULL;
}
/**
 * rotr - The last element of the stack becomes the top one
 * @stack: pointer to the head
 * @line_number: unused argument
*/
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;

	if (stack == NULL || *stack == NULL)
		return;
	temp = *stack;
	while (temp->next != NULL && temp != NULL)
		temp = temp->next;

	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
}
