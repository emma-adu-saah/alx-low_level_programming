#include <stdio.h>
/**
 *main - Prints the sum of even-valued terms in the fibonacci sequence
 *Return: 0
 **/
int main(void)
{
	long int next = 0, sum = 0, a = 1, b = 2;

	while (next < 4000000)
	{
		next = a + b;
		if (next % 2)
		{
			sum += next;
		}
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}
