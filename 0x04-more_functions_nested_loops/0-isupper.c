#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: the character to be checked.
 *
 * Return: 1 if c is uppercase, 0 if otherwise.
 */
int _isupper(int c)
{
	int i;
	int j = 0;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			j = 1;
		}
	}
	return (j);
}
