#include "monty.h"

void dont(void);
info_t inf = {NULL, NULL, NULL, NULL, 0, NULL, 0, NULL};

/**
* dont - sdsdsd
*
* Return: sdsdsd
*/

void dont(void){}

/**
* readFile - sdsdsdsd
*
* Return: sdsdsdsd
*/

void readFile(void)
{
char buf[256];

inf.filePtr = fopen(inf.fileName, "r");
if (inf.filePtr == NULL)
{
fprintf(stderr, "%s %s\n", "Error: Can't open file", inf.fileName);
exit(1);
}

while (fgets(buf, sizeof(buf), inf.filePtr) != NULL)
{
inf.lineNumb++;
buf[strlen(buf) - 1] = '\0';

if ((lineFormating(buf, strlen(buf)) == -1))
continue;
opExe();
free(inf.line);
}
fclose(inf.filePtr);
}
/**
* main - sdsdsd
*
* @argc: sdsdsdsd
* @argv: sdsdsdsd
*
* Return: sdsdsdsd
*/

int main(int argc, char **argv)
{

inf.fileName = argv[1], inf.lineNumb = 0, inf.top = NULL;

if (argc != 2)
errorHandling("USAGE: monty file", 1);
readFile();
free_list(inf.top);
return (0);
}

