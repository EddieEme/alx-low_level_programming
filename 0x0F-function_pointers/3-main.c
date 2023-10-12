#include "3-calc.h"

/**
  * main - Entry point
  * @argv: argument vector
  * @argc: argument count
  * Return: Always 0 (successful)
  */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;
	int (*op_func)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
