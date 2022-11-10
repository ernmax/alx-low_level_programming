
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* main - a program that prints all arguments it receives.
* @argc: count
* @argv: print name
* Return: program name
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
