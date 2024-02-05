#include "monty.h"
/**
 * _pall - this function  prints out the stack
 * @head: stack head
 * @linum: line num where opcode is found (unused)
 */
void _pall(stack_t **head, unsigned int linum)
{
	stack_t *x;
	(void)linum;

	x = *head;
	if (x == NULL)
		return;
	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
	}
}

