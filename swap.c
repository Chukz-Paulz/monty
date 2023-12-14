#include "monty.h"

/**
 * f_swap - This adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: returns nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	/*declarations*/
	stack_t *current = *head;
	int len = 0, aux;

	while (current)
	{
		current = current->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	aux = current->n;
	current->n = current->next->n;
	current->next->n = aux;
}
