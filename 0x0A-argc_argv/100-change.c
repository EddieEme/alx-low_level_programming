#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the minimum number of coins
* to make change for an amount of money.
* @argc: argument count
* @argv: vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, coins, cents;
	int denominations[] = {25, 10, 5, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;


	for (i = 0; i < 4; i++)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}

