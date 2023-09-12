#include <stdio.h>

/**
 * _abs - prints absolute value of integer
 * @i: The integer
 * Return: the absolute value of the integer
 */
int _abs(int i)
{
	int j = i;

	if (i < 0)
	{
		j = i * -1;
	}
	return (j);
}
