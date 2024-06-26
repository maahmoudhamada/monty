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

/**
* subOp - fdfdfdf
*
* @stack: sdsdsd
* @line_number: sdsdsd
*
* Return: sdsdsdsd
*/
void subOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *ptr;
int tmp, len;

len = listLen();
if (len < 2)
errorHandling("can't sub, stack too short", 3);

ptr = (*stack)->next;
tmp = ptr->n - (*stack)->n;
ptr->n = tmp;
ptr->prev = (*stack)->prev;
free(*stack);
*stack = ptr;
}

/**
* divOp - fdfdfdf
*
* @stack: sdsdsd
* @line_number: sdsdsd
*
* Return: sdsdsdsd
*/
void divOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *ptr;
int tmp, len;

len = listLen();
if (len < 2)
errorHandling("can't div, stack too short", 3);
else if ((*stack)->n == 0)
errorHandling("division by zero", 3);

ptr = (*stack)->next;
tmp = ptr->n / (*stack)->n;
ptr->n = tmp;
ptr->prev = (*stack)->prev;
free(*stack);
*stack = ptr;
}


/**
* mulOp - fdfdfdf
*
* @stack: sdsdsd
* @line_number: sdsdsd
*
* Return: sdsdsdsd
*/
void mulOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *ptr;
int tmp, len;

len = listLen();
if (len < 2)
errorHandling("can't mul, stack too short", 3);

ptr = (*stack)->next;
tmp = ptr->n * (*stack)->n;
ptr->n = tmp;
ptr->prev = (*stack)->prev;
free(*stack);
*stack = ptr;
}

/**
* modOp - fdfdfdf
*
* @stack: sdsdsd
* @line_number: sdsdsd
*
* Return: sdsdsdsd
*/
void modOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *ptr;
int tmp, len;

len = listLen();
if (len < 2)
errorHandling("can't mod, stack too short", 3);
else if ((*stack)->n == 0)
errorHandling("division by zero", 3);

ptr = (*stack)->next;
tmp = ptr->n % (*stack)->n;
ptr->n = tmp;
ptr->prev = (*stack)->prev;
free(*stack);
*stack = ptr;
}

