#include <stdio.h>
#include "main.h"

/**
 * print_line - Draw a straight line in terminal
 * @n: number of the character _ shoudl be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
