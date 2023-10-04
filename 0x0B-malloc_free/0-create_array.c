#include "main.h"
/**
* create_array - function that creates an array of chars
* and initializes it with a specific char
* @size: the adress of memory to create
* @c: the size of the memory to print
* Return: array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
