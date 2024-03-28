#include "monty.h"

/**
* free2d - fdsds
* @grid: sdsdsdsd
*
* Return: sdsdsd
*/

void free2d(char **grid)
{
int i = 0;
for (i = 0; grid[i]; i++)
free(grid[i]);
free(grid);
}
