#include "monty.h"

/**
* popOp - fdfdfdf
*
* @stack: sdsdsd
* @line_number: sdsdsd
*
* Return: sdsdsdsd
*/
void popOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *ptr;
int len = listLen();

if (len == 0)
errorHandling("can't pop an empty stack", 3);

ptr = (*stack)->next;
free(*stack);
*stack = ptr;
}

