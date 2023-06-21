#include "monty.h"
/**
 * is_number - check if a given string is a number
 * @str: string to check
 * Return: 1 if true, 0 if false
*/
int is_number(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (str[0] == '-')
		i++;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * exec_op - executes the opcode
 * @code: opcode
 * @stack: pointer to the head node
*/
void exec_op(char *code, stack_t **stack)
{
	int i = 0, flag = 0;
	char *argv;

	instruction_t op_codes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};
	while (op_codes[i].opcode != NULL)
	{
		if (strcmp(op_codes[i].opcode, code) == 0)
		{
			flag = 1;
			argv = strtok(NULL, " \n\t");
			if (strcmp(op_codes[i].opcode, "push") == 0)
			{
				if (argv == NULL || !is_number(argv))
					print_error_line("usage: push integer", &global_var.line_number);
				else
					op_codes[i].f(stack, atoi(argv));
			}
			else
				op_codes[i].f(stack, 0);
		}
		i++;
	}
	if (!flag)
		print_error_opcode("unknown instruction", code, &global_var.line_number);
}
/* void print_error_opcode(char *error, char *opcode, unsigned int *line_number) */