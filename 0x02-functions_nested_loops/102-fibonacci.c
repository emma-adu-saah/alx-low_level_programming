#include <stdio.h>
/**
 *main - Prints the first 50 Fibonacci Sequence
 *Return: 0
 **/
int main(void)
{
	int i = 0;
	long int next = 0, a = 1, b = 2;

	printf("%ld %ld ", a, b);
	while (i <= 50)
	{
		next = a + b;
		printf("%ld ", next);
		a = b;
		b = next;
		++i;
	}
	printf("\n");
	return (0);
}
