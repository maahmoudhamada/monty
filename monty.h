#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SZ 1024

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */


typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct InstructnInfo - sdsdsdsdsd
 *
 * @filePtr: sdsdsdsdsd
 * @lineArgs: sdsdsdsdsd
 * @fileName: sdsdsdsdsd
 * @opCd: sdsdsdsdsdsd
 * @opVal: sdsdsdsdsdsd
 * @line:  sdsdsdsdsdsdsds
 * @lineNumb: sdsdsdsdsdsd
 * @top: sdsdsdsdsdsd
 * Description: sdsdsdsdsd
 */

typedef struct InstructnInfo
{
FILE *filePtr;
char **lineArgs;
char *fileName;
char *opCd;
int opVal;
char *line;
unsigned int lineNumb;
stack_t *top;

} info_t;

extern info_t inf;
int lineFormating(char *line, ssize_t rd);
char **tokenizer(char *s, char *deli);
void free2d(char **grid);

void errorHandling(char *errorm, int flag);
char *_strdup(const char *s);
void readfile(void);
void (*getOpCode(char *str))(stack_t **stack, unsigned int line_number);
void pushOp(stack_t **stack, unsigned int line_number);
void pallOp(stack_t **stack, unsigned int line_number);
void pintOp(stack_t **stack, unsigned int line_number);
void swapOp(stack_t **stack, unsigned int line_number);
void nopOp(stack_t **stack, unsigned int line_number);
void addOp(stack_t **stack, unsigned int line_number);
void subOp(stack_t **stack, unsigned int line_number);
void divOp(stack_t **stack, unsigned int line_number);
void mulOp(stack_t **stack, unsigned int line_number);
void modOp(stack_t **stack, unsigned int line_number);
void popOp(stack_t **stack, unsigned int line_number);
void pcharOp(stack_t **stack, unsigned int line_number);

stack_t *stackPushing(stack_t **top);

char *_strconcat(char *s1, char *s2);

void opExe(void);

void free_list(stack_t *top);
void checkValue(char *str);
int listLen(void);
#endif
