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
int total = 0;
int num, i, j;
if (argc < 2)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isalpha(argv[i][j]))
{
num = atoi(argv[i]);
total += num;
}
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", total);
}
return (0);
}
