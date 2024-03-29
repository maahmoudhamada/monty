#include "monty.h"

/**
* pcharOp - ssdsd
*
* @stack: sdsdsd
* @line_number: sdsdsd
*
* Return: sdsdsd
*/
void pcharOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
int len = listLen();

if (len == 0)
errorHandling("can't pchar, stack empty", 3);

else if (!isascii((*stack)->n))
errorHandling("can't pchar, value out of range", 3);

else
printf("%c\n", (*stack)->n);
}

