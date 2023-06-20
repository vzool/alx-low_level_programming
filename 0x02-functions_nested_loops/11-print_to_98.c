#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: int
 *
 * Return: void
 */
void print_to_98(int n)
{
	int x = 98, i = 0, j;
	char num[3];

	for (; i <= n; i++)
	{
		sprintf(num, "%d", i);
		for(j = 0; j < 3; j++)
			_putchar(num[j]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}

