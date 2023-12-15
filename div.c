#include "monty.h"

/**
 * f_div - This divides the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: Has no return
 */
void f_div(stack_t **head, unsigned int counter)
{
	/*Declaration*/
	stack_t *current = *head;

	if (stack_length(current) < 2)
		handle_stack_error(counter, "can't div, stack too short");

	if (current->n == 0)
		handle_division_by_zero(counter);

	current->next->n /= current->n;
	*head = current->next;
	free(current);
}

/**
 * stack_length - This returns the length of the stack.
 * @head: Stack head
 * Return: Length of the stack
 */
int stack_length(stack_t *head)
{
	int length = 0;

	while (head)
	{
		head = head->next;
		length++;
	}

	return (length);
}

/**
 * handle_stack_error - Handles stack-related errors.
 * @counter: Line number
 * @message: Error message
 * Return: Has no return
 */
void handle_stack_error(unsigned int counter, const char *message)
{
	fprintf(stderr, "L%d: %s\n", counter, message);
	fclose(bus.file);
	free(bus.content);
	free_stack(bus.head);
	exit(EXIT_FAILURE);
}

/**
 * handle_division_by_zero - Handles division by zero error.
 * @counter: Line number
 * Return: No return
 */
void handle_division_by_zero(unsigned int counter)
{
	fprintf(stderr, "L%d: division by zero\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(bus.head);
	exit(EXIT_FAILURE);
}
