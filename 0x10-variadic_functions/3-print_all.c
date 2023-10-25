#include "variadic_functions.h"
/**
 *print_all - Prints anything
 *@format: A list of types of arguments passed to the function
 *Return: Return nothing
 **/
void print_all(const char * const format, ...)
{
char *str;
va_list args;
va_start(args, format);
while (format && *format) {
switch (*format) {
case 'c':
printf("%d", va_arg(args, int));
break;
case 'i':
printf("%s%d", va_arg(args, int));
break;
case 'f':
printf("%s%f", va_arg(args, double));
break;
case 's':
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
break;
default:
break;
}
format++;
}
printf("\n");
va_end(args);
}
