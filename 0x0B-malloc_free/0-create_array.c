#include "main.h"
/**
 *create_array - Creates an array of chars, and initializes it with a specific char
 *@size: Size of the array of chars
 *@c: Specific char to initialize array with
 *Return: NULL if size = 0 || pointer to the array
 **/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
if (size == 0)
{
return (NULL);
}
str = malloc(sizeof(*str) * size);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}
