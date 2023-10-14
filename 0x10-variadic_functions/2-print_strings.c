#include "variadic_functions.h"
/**
 *print_strings - Prints strings
 *@separator: Character to separate given arguments
 *@n: The number of strings passed to the function
 *Return: Nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
string = va_arg(args, char *);
if (string == NULL)
{
string = "(nil)";
}
if (separator == NULL || i == n - 1)
{
printf("%s", string);
}
else
{
printf("%s%s", string, separator);
}
}
printf("\n");
va_end(args);
}
