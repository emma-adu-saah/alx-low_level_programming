#include "main.h"
/**
 *is_prime_number - Checks if n is a prime number
 *@n: Integer to check if prime
 *Rteturn: 1 if prime 0 if not
 **/
int is_prime_number(int n)
{
  int i;
  if (n < 2)
    {
      return (0);
    }
  return (check_prime(n, n - 1));
}

/**
 *check_prime - 
