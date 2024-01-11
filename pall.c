#include "monty.h"

/**
 * pall - Prints all values on the stack.
 * @stack: A pointer to the stack.
 * @line_number: The line number in the Monty bytecode file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
