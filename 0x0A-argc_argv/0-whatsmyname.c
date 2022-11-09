#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* main - prints its name + \n
* @argc: count
* @argv: print name
* Return: program name
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc; i++)
{
printf("%s ", argv[i]);
}
printf("\n");
return (0);
}
