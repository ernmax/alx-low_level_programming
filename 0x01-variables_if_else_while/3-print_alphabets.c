#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - prints alphabet in low and upper case
*it executes and prints
*Return: Always 0 (Success)
*/
int main(void)
{
char i, j;
for (i = 'a'; i <= 'z';
i++);
putchar(i);
for (j = 'A' ; j <= 'Z';
j++);
putchar(j);
putchar('\n');
return (0);
}
