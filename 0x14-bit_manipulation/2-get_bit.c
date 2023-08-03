#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to get bit from
 * @index: index of the bit to get
 *
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	mask = 1 << index;
	return ((n & mask) >> index);
}
