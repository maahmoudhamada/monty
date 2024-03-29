#include "monty.h"

/**
* getOpCode - fdfdfdf
*
* @str: sdsdsdsd
*
* Return: sfsdsd
*/

void (*getOpCode(char *str))(stack_t **stack, unsigned int line_number)
{
instruction_t opCmd[] = {
{"push", pushOp},
{"pall", pallOp},
{"pint", pintOp},
{"swap", swapOp},
{"nop", nopOp},
{"add", addOp},
{"sub", subOp},
{"div", divOp},
{"mul", mulOp},
{"mod", modOp},
{"pop", popOp},
{NULL, NULL}};
int i = 0;

for (i = 0; opCmd[i].opcode; i++)
{
if (strcmp(str, opCmd[i].opcode) == 0)
return (opCmd[i].f);
}
return (NULL);
}

