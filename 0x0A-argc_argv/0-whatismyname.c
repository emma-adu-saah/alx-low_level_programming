#include "main.h"
/**
 *main - Prints its name
 *@argc: A count of the arguments supplied
 *@argv: An array of pointers to a string.
 *Return: Nothing
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return (0);
}
