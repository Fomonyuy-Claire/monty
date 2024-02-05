#include "monty.h"
/**
 * _addnode -function that add node to the head stack
 * @headl: head of the stack
 * @n: new_value
 */
void _addnode(stack_t **headl, int n)
{

	stack_t *new_node, *tam;

	tam = *headl;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (tam)
		tam->prev = new_node;
	new_node->n = n;
	new_node->next = *headl;
	new_node->prev = NULL;
	*headl = new_node;
}
