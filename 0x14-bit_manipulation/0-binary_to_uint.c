#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is NULL or there are chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1') /* if not 0 or 1 */
			return (0);
		num <<= 1;		 /* multiply by 2 */
		if (b[i] == '1') /* if 1, add 1 */
			num += 1;
	}
	return (num);
}
