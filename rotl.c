#include "monty.h"

/**
 * f_rotl - This rotates the stack to the top.
 * @head: Stack head
 * @counter: Line number (unused)
 * Return: Has no return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	/*Declaration*/
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		/*Nothig to return*/
		return;
	}

	aux = (*head)->next;
	aux->prev = NULL;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
