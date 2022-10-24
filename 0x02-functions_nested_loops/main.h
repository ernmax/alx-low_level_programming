#include <unistd.h>
/**
*main -a program that prints _putchar
*it executes, and prints it
*Return: Always 0 (Success)
*/
int _putchar(char c)
{
  return (write(1, &c, 1));
}
