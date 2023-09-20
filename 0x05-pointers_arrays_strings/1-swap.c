#include "main.h"
/**
 *swap_int - Swaps the value of two integers
 *@a: First integer
 *@b: Second integer
 *Return: Nothing
 **/
void swap_int(int *a, int *b)
{
int x = *b;
*b = *a;
*a = x;
}
