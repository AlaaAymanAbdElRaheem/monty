#include "monty.h"
/**
 * exec_op - executes the opcode
 * @code: opcode
 * @line_number: line number
 * @stack: pointer to the head node
*/
void exec_op(char *code, stack_t **stack, unsigned int line_number)
{
	int i = 0, flag = 0;

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
			op_codes[i].f(stack, line_number);
		}
		i++;
	}
	if (!flag)
		print_error_opcode("unknown instruction", code, line_number);
}
