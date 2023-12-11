#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - Function that copies string
 * @dest: destination to which to copy to
 * @src: where to copy from
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	char *main_dest = dest;

	for (; *src != '\0'; src++, dest++)
	{
		strcpy(dest, src);
	}
	*dest = '\0';

	return (main_dest);
}
