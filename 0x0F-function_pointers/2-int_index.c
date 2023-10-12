#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: pointer to an array
* @size: size of the array
* @cmp: pointer to the function to be used
* Return: Always 0 (successful)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}

	return (-1);
}
