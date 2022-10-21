#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Description :Prints all the letters except q and e
*Description: "executes and prints"
*Return: Always 0 (Success)
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z' ; i++)
{
if (i == 'q' || i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
