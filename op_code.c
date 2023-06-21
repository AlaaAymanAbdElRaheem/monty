#include "monty.h"
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
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl}, {"rotr", rotr},
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
