#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - a program for commandline add positive digits.
* @argc: argument count
* @argv: point arguments
* Return: program name
*/
int main(int argc, char *argv[])
{
int num, sum;
sum = 0;
if (argc < 1)
return (0);
for (num = 1; num < argc; num++)
{
if (!atoi(argv[num]))
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
