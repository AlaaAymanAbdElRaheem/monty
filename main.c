#include "monty.h"

global_variable_t global_var;
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
	char *op_code;
	size_t len = 0;

	global_var.line_number = 0;
	if (argc != 2)
		print_error(1, "USAGE: monty file");

	global_var.file = fopen(argv[1], "r");
	if (global_var.file == NULL)
		print_error(2, "Error: Can't open file", argv[1]);

	while (getline(&global_var.instruction, &len, global_var.file) != -1)
	{
		global_var.line_number++;
		op_code = strtok(global_var.instruction, " \n\t");
		if (op_code == NULL || *op_code == '#')
			continue;
		if (strcmp(op_code, "stack") == 0 || strcmp(op_code, "queue") == 0)
		{
			global_var.stack_mode = (strcmp(op_code, "stack") == 0) ? 1 : 0;
			continue;
		}
		exec_op(op_code, &global_var.stack);
	}
	free_allocated();
	return (EXIT_SUCCESS);
}
