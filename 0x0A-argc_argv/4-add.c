#include "main.h"
#include <ctype.h>

/**
 * main - Adds two numbers
 * @argc: Argument count
 * @argv: List of arguments
 * Return: Returns 0 on success
 **/
int main(int argc, char **argv)
{
int i, num, total = 0, j;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
total += num;
}
printf("%d\n", total);
return (0);
}
