#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: number to be checked.
 *
 * Return: 1 if num is a digit, 0 if otherwise.
 */
int _isdigit(int c)
{
	int i;
	int j = 0;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			j = 1;
		}
	}
	return (j);
}
