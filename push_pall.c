#include "monty.h"

/**
 * f_push - This add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: returns nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	/*Declarations*/
	int n, flag = 0;

	if (!bus.arg || (!isdigit(bus.arg[0]) &&
	(bus.arg[0] != '-' || !isdigit(bus.arg[1]))))
	{
		flag = 1;
	}

	if (flag)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

/**
 * f_pall - This prints the stack
 * @head: stack head
 * @counter: not used
 * Return: returns nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	/*declaration*/
	stack_t *current = *head;
	(void)counter;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
