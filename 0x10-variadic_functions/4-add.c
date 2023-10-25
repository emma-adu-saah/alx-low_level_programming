#include "main.h"
/**
 *main - Adds two numbers
 *@argc: Argument count
 *@argv: List of arguments
 *Return: Returns 0 on success
 **/
int main(int argc, char **argv)
{
  int total;
  int i;
  if (argc < 2)
    {
      printf("%d\n", 0);
    }
  else
    {
      for (i = 0; i < argc; i++)
	{
	  if (isalpha(i))
	    {
	      printf("Error\n");
	      return (1);
	    }
	  else
	    {
	      total += i;
	    }
	}
    }
  printf("%d\n", total);
  return (0);
}
