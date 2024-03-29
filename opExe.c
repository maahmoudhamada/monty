#include "monty.h"

/**
* opExe - sdsdsd
*
* Return: sdsdsd
*/

void opExe(void)
{
void (*f)(stack_t **, unsigned int line_number);

inf.lineArgs = tokenizer(inf.line, " ");

if (strcmp(inf.lineArgs[0], "push") == 0 && !inf.lineArgs[1])
errorHandling("usage: push integer", 3);

f = getOpCode(inf.lineArgs[0]);
if (f == NULL)
errorHandling("unknown instruction", 4);

f(&inf.top, inf.lineNumb);
free2d(inf.lineArgs);
}

