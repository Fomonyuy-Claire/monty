#include "monty.h"
/**
 * _div - this function divides the top two elements of the stack.
 * @headl: stack head
 * @linum: line_number
 */
void _div(stack_t **headl, unsigned int linum)
{
	stack_t *shep;
	int len = 0, tam;

	shep = *headl;
	while (shep)
	{
		shep = shep->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", linum);
		fclose(glob.file);
		free(glob.cont);
		_free_stack(*headl);
		exit(EXIT_FAILURE);
	}
	shep = *headl;
	if (shep->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", linum);
		fclose(glob.file);
		free(glob.cont);
		_free_stack(*headl);
		exit(EXIT_FAILURE);
	}
	tam = shep->next->n / shep->n;
	shep->next->n = tam;
	*headl = shep->next;
	free(shep);
}

