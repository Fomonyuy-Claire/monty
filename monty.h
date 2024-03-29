#ifndef MONTY_HEAD
#define MONTY_HEAD

#define  _GNU_SOURCE
#include <stdio.h>

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>


/* ****> Stack structure <**** */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct glob_s - holds relevant progam information
 * @arg: ptr to string which holds argument. dd.
 * @file: pointer to monty file
 * @cont: ptr to string containing the line content
 * @lifi: flag to indicate change btn. stack & queue
 * ... whether an operation should be performed in stack-like
 * or queue-like manner
 *
 * Description: shares program values through each file
 */
typedef struct glob_s
{
	char *arg;
	FILE *file;
	char *cont;
	int lifi;
}  glob_t;
extern glob_t glob;  /*Global variable*/

int _execute(char *cont, stack_t **hdl, unsigned int linum, FILE *file);
void _addnode(stack_t **headl, int n);
void _free_stack(stack_t *head);
void _addqueue(stack_t **headl, int n);

void _push(stack_t **head, unsigned int linum);
void _pall(stack_t **head, unsigned int linum);
void _queue(stack_t **headl, unsigned int linum);
void _pint(stack_t **headl, unsigned int linum);
void _pop(stack_t **headl, unsigned int linum);
void _swap(stack_t **headl, unsigned int linum);
void _add(stack_t **headl, unsigned int linum);
void _nop(stack_t **headl, unsigned int linum);


void _sub(stack_t **headl, unsigned int linum);
void _div(stack_t **headl, unsigned int linum);
void _mul(stack_t **headl, unsigned int linum);
void _mod(stack_t **headl, unsigned int linum);
void _stack(stack_t **headl, unsigned int linum);
#endif  /*MONTY_HEAD*/
