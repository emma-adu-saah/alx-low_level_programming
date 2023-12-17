#include <stdio.h>
/**
 *main - Prints the first 98 Fibonacci numbers
 *Return: 0
 **/
int main(void)
{
	unsigned long int next = 0, a = 1, b = 2;
	int i = 0;

	printf("%lu, %lu, ", a, b);

	while (i <= 82)
	{
		next = a + b;
		if (i < 82)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu\n", next);
		}
		a = b;
		b = next;
		i++;
	}
	return (0);
}
