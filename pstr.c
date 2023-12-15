#include "monty.h"

/**
 * f_pstr - Prints d string starting at the top of d stack, next to new line.
 * @head: Stack head
 * @counter: Line number
 * Return: Has no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	/*Declaration*/
	stack_t *current = *head;
	(void)counter;

	while (current && (current->n > 0 && current->n <= 127))
	{
		printf("%c", current->n);
		current = current->next;
	}

	printf("\n");
}
