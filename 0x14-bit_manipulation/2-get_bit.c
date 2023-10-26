#incude "main.h"

/**
  * get_bit - function that returns the value of a
  * bit at a given index
  * @index:  index is the index, starting from
  * 0 of the bit you want to get
  * @n: the value
  * Return: the value of the bit at index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	n >>= index;
	return (n & 1);
}
