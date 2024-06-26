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
int i = 0;
for (i = 0; inf.lineArgs[1][i]; i++)
{
if (inf.lineArgs[1][0] == '-')
continue;
else if (!isdigit(inf.lineArgs[1][i]))
errorHandling("usage: push integer", 3);

}
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

if (len == 0 || stack == NULL)
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

if (len == 0 || stack == NULL)
errorHandling("can't pint, stack empty", 3);
else
printf("%d\n", (*stack)->n);
}

/**
* swapOp - sdsdsds
*
* @stack: sdsdsdsd
* @line_number: sdsdsdsd
*
* Return: sdsdsdsds
*/
void swapOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *fst, *scd;
int tmp, len = listLen();

if (len < 2)
errorHandling("can't swap, stack too short", 3);
else
{
fst = *stack;
scd = (*stack)->next;
tmp = fst->n;
fst->n = scd->n;
scd->n = tmp;
}
}

/**
* nopOp - sdsdsds
*
* @stack: sdsdsdsd
* @line_number: sdsdsdsd
*
* Return: sdsdsdsds
*/
void nopOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
(void) stack;
return;
}

