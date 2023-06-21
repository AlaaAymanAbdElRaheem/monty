#include "monty.h"
/**
 * free_list - free the stack
 * @stack: pointer to the head node
*/
void free_list(stack_t **stack)
{
	stack_t *temp;

	while (*stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}
/**
 * free_allocated - free the allocated memory
*/
void free_allocated(void)
{
	if (global_var.file != NULL)
		fclose(global_var.file);
	if (global_var.instruction != NULL)
		free(global_var.instruction);
	if (global_var.stack != NULL)
		free_list(&global_var.stack);
}
