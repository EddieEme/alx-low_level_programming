#include "main.h"

/**
 * flip_bits -  function that returns the number of bits
 * @n: binary rep of number1
 * @m: binary rep of number2
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff >>= 1;
	}
	return (count);
}
