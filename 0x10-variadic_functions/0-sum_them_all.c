#include "variadic_functions.h"
/**
 *sum_them_all - Sums all of its parameters
 *@n: constant or defined argument
 *Return: Returns the sum of all its parameters, 0 if n = 0
 **/
int sum_them_all(const unsigned int n, ...)
{
int i, total, num;
va_list args;
va_start(args, n);
if (n == 0)
{
return (0);
}
total = 0;
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
total += num;
}
va_end(args);
return (total);
}
