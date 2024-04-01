#include "monty.h"

/**
* rotlOp - sdsdsds
*
* @stack: sdsdsds
* @line_number: sdsdsdsdsd
*
* Return: Void
*/

void rotlOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *last, *scd;

if (listLen() < 2)
return;
for (last = *stack; last->next != NULL; last = last->next)
;

scd = (*stack)->next;
scd->prev = (*stack)->prev;
(*stack)->next = last->next;
last->next = *stack;
(*stack)->prev = last;
*stack = scd;
}

