#include "main.h"

/**
 * main - ENtry point
 *
 * Result: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - This function prints aphabet in lowercase
 */

void print_alphabet(void)
{	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
