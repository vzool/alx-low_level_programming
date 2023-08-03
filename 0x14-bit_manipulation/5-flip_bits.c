#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to get from one number to
 * another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count = 0;

	mask = n ^ m;
	while (mask > 0)
	{
		if ((mask & 1) == 1)
			count++;
		mask >>= 1;
	}
	return (count);
}
