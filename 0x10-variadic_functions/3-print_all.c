#include "variadic_functions.h"

/**
* print_all - variadic function that prints anything
* @format: is a list of types of arguments passed to the function
* Return: Nothing
*/

void print_all(const char * const format, ...)
{
	va_list print_all;

	char *str;
	int i = 0;

	int format_len = strlen(format);

	va_start(print_all, format);
	while (i < format_len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print_all, int));
				printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(print_all, int));
				printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(print_all, double));
				printf(", ");
				break;
			case 's':
				str = va_arg(print_all, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(print_all);
}
