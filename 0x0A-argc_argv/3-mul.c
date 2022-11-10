#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - a program for commandline multiplication.
* @argc: count
* @argv: print name
* Return: program name
*/
int main(int argc, char *argv[])
{
int a, b, result;
char opr;
if (argc != 4)
{
printf("Error\n");
return (-1);
}
/**values.Use atoi s>d */
a = atoi(argv[1]);
b = atoi(argv[3]);
/**get operator*/
opr = argv[2][0];
/**calc according to operator*/
switch (opr)
{
case '+':
result = a + b;
break;
case '-':
result = a - b;
break;
case '*':
result = a *b;
break;
default:
result = 0;
break;
}
if (opr == '+' || opr == '-' || opr == '*')
printf("Here is your answer: %d  %c %d = %d\n", a, opr, b, result);
else
printf("Operator is Unknown,Try again\n");
return (0);
}
