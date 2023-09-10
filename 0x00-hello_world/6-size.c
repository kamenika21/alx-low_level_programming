#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float fl;

	printf("Size of a char: %d byte(s)", sizeof(ch));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of a long int: %d byte(s)", sizeof(li));
	printf("Size of a long long int: %d byte(s)", sizeof(lli));
	printf("Size of a float: %d byte(s)", sizeof(fl));

	return (0);
}
