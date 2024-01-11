#include "monty.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    stack_t *stack = NULL;

    push(&stack, 10, 1);
    push(&stack, 20, 2);
    push(&stack, 30, 3);

    printf("Stack after pushes:\n");
    pall(&stack, 0);

    return 0;
}

