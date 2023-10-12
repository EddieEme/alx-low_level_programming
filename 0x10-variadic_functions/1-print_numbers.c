#include "variadic_functions.h"

/**
* print_numbers - variodic function
* that prints numbers, followed by a new line
* @separator: where separator is the string to
* be printed between numbers
* @n: is the number of integers passed to the function
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int count;

	va_start(number, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(number, int));
		if (count != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(number);
}
