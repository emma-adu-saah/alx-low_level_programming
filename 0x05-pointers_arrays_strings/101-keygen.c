#include <stdlib.h>
#include <time.h>
/**
 *main - Generates a random number
 *Return: Returns the randomly generated integer
 **/
int main(void)
{
	int randomNumber;
	srand(time(NULL));
	randomNumber = rand();
	return randomNumber;
}
