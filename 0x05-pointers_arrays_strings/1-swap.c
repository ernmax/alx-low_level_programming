#include "main.h"
#include <stdio.h>

/**
* Swap_int > Write a function that swaps the values of two integers.
* @a: parameter 1
* @b: parameter 2
* Return: n
*/

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
