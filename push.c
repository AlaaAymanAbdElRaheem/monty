#include "monty.h"

/**
 * push - adds a new node at the beginning of the stack.
 * @stack: pointer to the head node
 * @linenumber: new value of the new node
 */

void push(stack_t **stack, unsigned int linenumber)
{
	stack_t *new_node, *temp;
	int n;
	char *args;
	(void) temp, (void) linenumber, (void) n;

	args = strtok(NULL, " \n\t");
	if (args == NULL || !is_number(args))
		print_error_line("usage: push integer", &global_var.line_number);
	n = atoi(args);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_node);
		free_allocated();
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	if (global_var.stack_mode == 1)
		add_begining(stack, new_node);
	else/*push in queue (from end)*/
		add_end(stack, new_node);

}
/**
 * add_begining - adds a new node at the beginning of the stack.
 * @stack: pointer to the head node
 * @newnode: new node to add
*/
void add_begining(stack_t **stack, stack_t *newnode)
{
	newnode->prev = NULL;
	newnode->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = newnode;
	*stack = newnode;

}
/**
 * add_end - adds a new node at the end of the stack.
 * @stack: pointer to the head node
 * @newnode: new node to add
*/
void add_end(stack_t **stack, stack_t *newnode)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*stack = newnode;
	}
	else
	{
		temp = *stack;
		while (temp->next != NULL)
			temp = temp->next;
		newnode->prev = temp;
		newnode->next = NULL;
		temp->next = newnode;
	}
}
