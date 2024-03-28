#include "monty.h"

/**
* errorHandling - dfadsdfsd
*
* @errorm: sdsdsd
* @flag: sdsdsd
*
* Return: sdsdsd
*/

void errorHandling(char *errorm, int flag)
{
int len = listLen();

if (flag < 2)
fprintf(stderr, "%s\n", errorm);

else
{
if (flag == 3)
fprintf(stderr, "L%d: %s\n", inf.lineNumb, errorm);
else if (flag == 4)
fprintf(stderr, "L%d: %s %s\n", inf.lineNumb, errorm, inf.lineArgs[0]);

free2d(inf.lineArgs), free(inf.line), fclose(inf.filePtr);
}

if (len > 0)
free_list(inf.top);

exit(EXIT_FAILURE);
}
