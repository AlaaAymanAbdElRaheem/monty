#include "monty.h"
void exec_op(char *code, stack_t **stack)
{
	int i = 0, flag = 0;
	char *argv;

	instruction_t op_codes[] = {
		{"push", push},
		{"pall", pall},
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
				if (argv == NULL)
					print_error(3, "L", global_var.line_number, ": usage: push integer");
			}
			else
				op_codes[i].f(stack, 0);
		}
		i++;
	}
	if (!flag)
		print_error(3, "L", global_var.line_number, ": unknown instruction ", code);
}