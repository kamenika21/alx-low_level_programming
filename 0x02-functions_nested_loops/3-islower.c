#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c:  character to be checked
 *
 * Return: 1 if c is lower case, 0 if otherwise
 */
int _islower(int c)
{
	int i;
	int r = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			r = 1;
		}
	}
	return (r);
}
