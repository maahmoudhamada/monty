#include "monty.h"

/**
* addOp - fdfdfdf
*
* @stack: sdsdsd
* @line_number: sdsdsd
*
* Return: sdsdsdsd
*/
void addOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *ptr;
int tmp, len;

len = listLen();
if (len < 2)
errorHandling("can't add, stack too short", 3);

ptr = (*stack)->next;
tmp = (*stack)->n + ptr->n;
ptr->n = tmp;
ptr->prev = (*stack)->prev;
free(*stack);
*stack = ptr;
}

