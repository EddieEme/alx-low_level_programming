#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: parameter
 * @size: parameter
 * Return: Nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = 0;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total_size); /* allocating 0 memory to zero */
	return (ptr);
}
