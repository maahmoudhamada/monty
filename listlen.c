#include "monty.h"

/**
* listLen - fsdsdsdsd
*
* Return: sdsdsdsd
*/

int listLen(void)
{
stack_t *p;
int len = 0;
for (p = inf.top; p; p = p->next)
len++;
return (len);
}

