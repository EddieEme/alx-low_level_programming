#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: mini
 * @max: max
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *array;
	int range = max - min;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((range + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= range; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
