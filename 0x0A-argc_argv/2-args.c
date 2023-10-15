#include "main.h"
/**
 *main - Prints all arguments it receives
 *@argc: Number of arguments passed
 *@argv: An array of arguments passed
 *Return: Returns 0 on success
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
