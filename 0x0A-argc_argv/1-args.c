#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* main - a program that prints the number of arguments passed into it.
* @argc: count
* @argv: print name
* Return: program name
*/
int main(int argc, char *argv[])
{
int counter;
for (counter = 0; counter < argc ; counter++)
printf("argv[%2d]: %s\n", counter, argv[counter]);
return (0);
}
