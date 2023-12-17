#include <stdio.h>
/**
 *main - Prints the first 98 Fibonacci numbers
 *Return: 0
 **/
int main(void)
{
	long int next = 0, a = 1, b = 2;
	int i = 0;

	printf("%ld, %ld, ", a, b);

	while (i <= 96)
	{
		next = a + b;
		if (i < 96)
		{
			printf("%ld, ", next);
		}
		else
		{
			printf("%ld\n", next);
		}
		a = b;
		b = next;
		i++;
	}
	return (0);
}
