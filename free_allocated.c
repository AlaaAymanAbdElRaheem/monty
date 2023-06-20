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
	free(global_var.instruction);
	fclose(global_var.file);
	free_list(&global_var.stack);

}
