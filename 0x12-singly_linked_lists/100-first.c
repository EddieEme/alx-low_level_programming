#include <stdio.h>

/**
 * before_main - function executed before main
 * Return: no return.
 */

__attribute__ ((constructor))
void before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
