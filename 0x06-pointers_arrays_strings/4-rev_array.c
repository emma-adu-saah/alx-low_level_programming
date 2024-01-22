#include "main.h"
#include <stdio.h>
/**
 *reverse_array - Reverses the content of an array
 *@a: Array to reverse
 *@n: Number of elements of the array
 *Return: Nothing
 **/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
