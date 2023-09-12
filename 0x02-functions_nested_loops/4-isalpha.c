#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 if c is an alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	int i, j;
	int r = 0;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			r = 1;
			break;
		}
	}
	if (r != 1)
	{
		for (j = 97; j <= 122; j++)
		{
			if (c == j)
			{
				r = 1;
				break;
			}
		}
	}
	return (r);
}
