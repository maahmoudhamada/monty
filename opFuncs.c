#include "monty.h"

/**
* pushOp - function
*
* @stack: stack
* @line_number: sdsdsd
*
* Return: sdsdsd
*/

void pushOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
checkValue(inf.lineArgs[1]);
stackPushing(stack);
}

/**
* pallOp - function
*
* @stack: stack
* @line_number: sdsdsd
*
* Return: sdsdsd
*/
void pallOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *p;
int len = listLen();

if (len == 0)
return;
for (p = *stack; p; p = p->next)
printf("%d\n", p->n);
}

/**
* pintOp - function
*
* @stack: stack
* @line_number: sdsdsd
*
* Return: sdsdsd
*/
void pintOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
int len = listLen();

if (len == 0)
errorHandling("can't pint, stack empty", 3);

printf("%d\n", (*stack)->n);
}

