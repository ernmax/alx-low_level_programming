#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*Main - Alphabet
*executes and prints
*Returns: 0 (Always)
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
putchar('\n');
}
return (0);
}
