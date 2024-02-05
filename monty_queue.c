#include "monty.h"

/**
 * _addqueue - function that adds a new node to the rear of the queue
 * @n: new value to be added
 * @hdl: ptr to the head of the queue
 */
void _addqueue(stack_t **headl, int n)
{
	stack_t *new_node, *tam;

	tam = *headl;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tam)
	{
		while (tam->next)
			tam = tam->next;
	}
	if (!tam)
	{
		*headl = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tam->next = new_node;
		new_node->prev = tam;
	}
}
