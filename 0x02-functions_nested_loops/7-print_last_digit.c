#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer
 *
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int ldig = i % 10;

	if (ldig < 0)
	{
		ldig = ldig * -1;
	}

	_putchar('0' + ldig);

	return (ldig);
}
