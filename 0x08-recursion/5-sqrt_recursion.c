#include "main.h"
#include <stdio.h>
/**
*_sqrt_recursion - Calculates the natural square root of a number
*@n: Input integer
*Return: An Integer
**/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
*find_sqrt - recurses to find the natural square root
*of a number
*@n: number to calculate the sqaure root of
*@i: iterator
*Return: the resulting square root
**/
int find_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (find_sqrt(n, i + 1));
}
