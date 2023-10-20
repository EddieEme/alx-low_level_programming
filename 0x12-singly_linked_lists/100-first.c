#include <stdio.h>

/**
 * first - function executed before main
 * Return: no return.
 */

__attribute__ ((constructor))
void before_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
