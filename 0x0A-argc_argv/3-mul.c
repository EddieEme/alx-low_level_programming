#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, multiples;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	multiples = num1 * num2;
	printf("%d\n", multiples);
	return (0);
}
