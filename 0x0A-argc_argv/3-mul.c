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
int i, multp = 1;
if (argc != 3)
{
printf("Error...\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
multp *= atoi(argv[i]);
}
printf(" % d\n", multp);
}
return (0);
}
