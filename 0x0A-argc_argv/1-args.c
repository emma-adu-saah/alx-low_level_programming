#include "main.h"
/**
 *main - Prints the number of arguments passed into it.
 *@argc: Counts the number of arguments
 *@argv: An array of the arguments
 *Return: Returns 0 on success
 **/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
