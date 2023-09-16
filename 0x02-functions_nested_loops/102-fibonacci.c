#include <stdio.h>

/**
* main - main block
* Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
* Numbers must be coma and space separated.
* Return: 0
*/
int main(void)
{
	int i = 3;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);
	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		i++;
	}
	return (0);
}
