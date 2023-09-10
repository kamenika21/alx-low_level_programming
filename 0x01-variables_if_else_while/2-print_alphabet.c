#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
		if (n == 122)
		{
			putchar('\n');
		}
	}
	return (0);
}
