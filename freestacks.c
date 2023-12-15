#include "monty.h"
/**
 * free_stack - Frees Stacks
 * @head: head
 * @stack_t: stack t 
 * Return: Has no return
 * */
void free_stack(stack_t *head)
{
	stack_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
