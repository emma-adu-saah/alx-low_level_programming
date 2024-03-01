#include "main.h"
#include <stdio.h>
/**
 *main - Finds and prints the largest prime factor
 *
 *Return: 0 on Success else -1
 **/
int main(void)
{
	long int number = 612852475143;
	long int maximum = 0;
	long int j, i = 1;
	int count;

	while (i < number)
	{
		if (number % i == 0)
		{
			count = 0;
			/*Iteration to find if i is a prime number*/
			for (j = 1; j <= i; j++)
			{
				if (i % j == 0)
				{
					count++;
				}
			}
			if (count > 0 && i > maximum)
			{
				maximum = i;
			}
		}
		i++;
	}
	printf("%ld\n", maximum);
	return (0);
}
