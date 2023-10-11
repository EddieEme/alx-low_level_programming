#include "function_pointers.h"

/**
  * array_iterator - function given as a
  * parameter on each element of an array
  * @array: pointer to an array
  * @size: size of the array
  * @action: pointer to the function
  *
  *Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
