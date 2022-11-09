#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* Description - Uses of argc and argv
* @main: a program that prints its name
* @argc: Print with new name upon  renaming
* @argv: Path to be present
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
for (i =0; i < argc;i++)
{
printf("%s ", argv[i]);
}
printf("\n");
return (0);
}
