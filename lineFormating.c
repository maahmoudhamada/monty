#include "monty.h"
/**
* _isspace - fsdsdsd
*
* @c: sdsdsd
*
* Return: sdsdsd
*/

int _isspace(char c)
{
int spaces[] = {9, 32}, i = 0;

for (i = 0; i < 2; i++)
if (spaces[i] == c)
return (1);

return (0);
}

/**
* lineFormating - dsdsdsd
*
* @line: sdsdsdsd
* @rd: sdsdsdsd
*
* Return: sdsdsd
*/

int lineFormating(char *line, ssize_t rd)
{
ssize_t end, new_length;
char buf[1024];
int i = 0, j = 0;

if (line[rd - 1] == '\n')
{
line[rd - 1] = '\0';
rd--;
}

end = rd - 1;

while (end >= 0 && _isspace(line[end]))
end--;

new_length = end + 1;

for (i = 0; i < new_length; i++)
{
if (_isspace(line[i]))
{
if (i > 0 && !_isspace(line[i - 1]))
buf[j++] = ' ';
}
else
buf[j++] = line[i];
}

buf[j] = '\0';
if (buf[0] == '\0')
return (-1);
inf.line = strdup(buf);
return (0);
}

