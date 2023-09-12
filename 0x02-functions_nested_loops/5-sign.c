#include <stdio.h>
#include "main.h"

/**
 * print_sign - check if the number is positive, zero or negative
 * @n: the number to be checked
 *
 * Return: 1 if positive, 0 if zero or -1 if negative
 */
int print_sign(int n)
{
	int r;

	if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
