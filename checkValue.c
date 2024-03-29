#include "monty.h"

/**
* checkValue - sdsdsd
*
* @str: sdsdsd
*
* Return: dssdsd
*/
void checkValue(char *str)
{
if (strcmp(str, "0") == 0 || strcmp(str, "-0") == 0)
inf.opVal = 0;

else
{
inf.opVal = atoi(str);
if (inf.opVal == 0)
errorHandling("usage: push integer", 3);
}
}

