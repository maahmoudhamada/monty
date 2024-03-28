#include "monty.h"

/**
* free_list - fdfdfdf
*
* @top: dsdsdsd
*
* Return: sdsdsd
*/

void free_list(stack_t *top)
{
stack_t *freed;

while (top)
{
freed = top;
top = top->next;
free(freed);
freed = top;
}
}

