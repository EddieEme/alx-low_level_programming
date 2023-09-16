#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2
* followed by a new line
* Return: ALways 0 (Success)
*/
int main(void)
{
	int i;
	unsigned long int first, second, next;

	first = 1;
	second = 2;

	printf("%lu, %lu", first, second);
	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		if (i == 98)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
	}
	return (0);
}
