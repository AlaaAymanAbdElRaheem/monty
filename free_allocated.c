#include "monty.h"
/**
 * free_allocated - free the allocated memory
*/
void free_allocated(void)
{
	free(global_var.instruction);
	fclose(global_var.file);

}
