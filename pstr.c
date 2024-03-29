#include "monty.h"

/**
* pstrOp - sdsdsd
*
* @stack: sdsdsdsd
* @line_number: sdsdsdsds
*
* Return: sdsdsdsd
*/

void pstrOp(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
  stack_t *p;
  int len;

  len = listLen();

  if (len != 0)
  {
    for (p = *stack; p; p = p->next)
    {
      if (!isascii(p->n) || p->n == 0)
      {
        printf("\n");
        return;
      }
      printf("%c", p->n);
    }
  }
  printf("\n");
}
