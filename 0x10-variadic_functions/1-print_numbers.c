#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - Print numbers
 *@separator: Character to separate numbers
 *@n: Number of integers passed to the function
 *Return: Returns nothing
 **/
void print_numbers(const char *separator, const unsigned int  n, ...)
{
unsigned int i;
int num;
va_list args;
va_start(args, n);
for (i = 0; i < n - 1; i++)
{
num = va_arg(args, int);
if (separator == NULL)
{
printf("%d", num);
}
else
{
printf("%d%s", num, separator);
}
}
printf("%d\n", va_arg(args, int));
va_end(args);
}
