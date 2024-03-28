#include "monty.h"

/**
* stackPushing - sdsdsdsd
*
* @top: sdsdsdsd
*
* Return: sdsdsdsd
*/

stack_t *stackPushing(stack_t **top)
{
stack_t *new;

if (top == NULL)
return (NULL);

new = malloc(sizeof(stack_t));

if (new == NULL)
errorHandling("Error: malloc failed", 1);

new->n = inf.opVal;
new->prev = NULL;

if (*top == NULL)
new->next = NULL;

else
{
new->next = *top;
(*top)->prev = new;
}

*top = new;
return (new);
}

