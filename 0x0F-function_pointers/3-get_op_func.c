#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 *
 * @s: operator passed as argument
 *
 * Return: pointer to the function that
 * corresponds to the operator
 * given as a parameter, NULL if no match is found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, /* 0 */
		{"-", op_sub}, /* 1 */
		{"*", op_mul}, /* 2 */
		{"/", op_div}, /* 3 */
		{"%", op_mod}, /* 4 */
		{0, 0}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}

	return (0);
}
