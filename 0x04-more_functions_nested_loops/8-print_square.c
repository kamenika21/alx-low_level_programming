#include <stdio.h>
#include "main.h"

/**
 * print_square - print the square using the given number
 * @s: The number to print the square of
 */
void print_square(int s)
{
	int i, j;

	if (s > 0)
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
