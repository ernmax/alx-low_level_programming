#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* main - a program that prints the number of arguments passed into it.
* @argc: count
* @argv: print name
* Return: program name
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
int counter;
for (counter = 0; counter < argc ; counter++)
printf("%d\n", counter - 1);
return (0);
}
