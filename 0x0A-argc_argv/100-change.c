#include "main.h"
/**
 *main - Prints the minimum number of coins to make change
 *@argc: Number of arguments
 *@argv: List of arguments passed
 *Return: 0 on success
 **/
int main(int argc, char **argv)
{
int i, cents, num_coins, coin_count;
int coin_values[5] = {25, 10, 5, 2, 1};
cents = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("0\n");
return (0);
}
num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
coin_count = 0;
for (i = 0; i < num_coins; i++)
{
while (cents >= coin_values[i])
{
cents -= coin_values[i];
coin_count++;
}
}
printf("%d\n", coin_count);
return (0);
}
