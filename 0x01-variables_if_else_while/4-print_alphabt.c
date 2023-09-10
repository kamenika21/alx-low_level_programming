#include <stdio.h>

/**
 * main - Print alphabet lowercase expect q and e
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 113 && n != 101)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
