#include "monty.h"

/**
 * free_stack: frees a doubly linked list
 * @head: head pointer to the stack
 *
 * Return: nothing
 */
void _free_stack(stack_t *head)
{
	stack_t *tam;

	tam = head;
	while (head)
	{
		tam = head->next;
		free(head);
		head = tam;
	}
}
