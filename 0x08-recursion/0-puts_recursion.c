#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - Print a string with a new line
 * @*s: string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	while(i <= *s.count()-1)
	{
		write(1, &*s, i);
		i++;
	}
}
