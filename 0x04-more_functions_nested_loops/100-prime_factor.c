#include <stdio.h>
/**
 *main - Prints the largest prime factor of a number
 *Return: 0
 **/

int main(void)
{
	long int number = 612852475143;
	long int divisor = 2;
	long int answer = 1;

	while (number > 1)
	{
		if (number % divisor == 0)
		{
			answer = divisor;
			while (number % divisor == 0)
			{
				number /= divisor;
			}
		}
		divisor++;
	}

	printf("%ld\n", answer);
	return (0);
}
