#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: pointer to the head node
 * @line_number: unused argument
 */

void add(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (check_len(*stack) < 2)
		print_error_line("can't add, stack too short", line_number);

	(*stack)->next->n = (*stack)->n + (*stack)->next->n;
	pop(stack, 0);
}


/**
 * sub - subtracts the top two elements of the stack.
 * @stack: pointer to the head node
 * @line_number: unused argument
 */

void sub(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (check_len(*stack) < 2)
		print_error_line("can't sub, stack too short", line_number);

	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	pop(stack, 0);
}


/**
 * _div - divides the second element of the stack by the top of the stack
 * @stack: pointer to the head node
 * @line_number: unused argument
 */

void _div(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (check_len(*stack) < 2)
		print_error_line("can't div, stack too short", line_number);
	else if ((*stack)->n == 0)
		print_error_line("division by zero", line_number);
	(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	pop(stack, 0);
}

/**
 * mul -  multiplies the second element of the stack with the top of the stack.
 * @stack: pointer to the head node
 * @line_number: unused argument
 */

void mul(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (check_len(*stack) < 2)
		print_error_line("can't mul, stack too short", line_number);
	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	pop(stack, 0);
}

/**
 * mod - get the reset of division the second element by the top of the stack
 * @stack: pointer to the head node
 * @line_number: unused argument
 */

void mod(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (check_len(*stack) < 2)
		print_error_line("can't mod, stack too short", line_number);
	else if ((*stack)->n == 0)
		print_error_line("division by zero", line_number);

	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	pop(stack, 0);
}
