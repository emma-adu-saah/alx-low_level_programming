#include <stdio.h>
/**
 *main - Prints all possible combinations of two two-digt numbers
 *Return: Return 0
 **/
int main(void)
{
  int a, b, c, d;
  for (a = 48; a <= 57; a++)
    {
      for (b = 48; b <= 57; b++)
	{
	  putchar(a);
	  putchar(b);
	  putchar(32);
      for (c = 48; c <= 57; c++)
	{
	  for (d = c + 1; d <= 57; d++)
	    {
	      putchar(c);
              putchar(d);
	      putchar(44);
	       }
	    }
        }
    }
  putchar('\n');
  return (0);
}
      
