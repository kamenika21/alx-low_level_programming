#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Dra a diagonal line
 * @n: The number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
