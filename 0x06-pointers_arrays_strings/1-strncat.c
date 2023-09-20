#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strncat - function that concatenates two strings
* @dest: Destination
* @src: source
* @n: length
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
