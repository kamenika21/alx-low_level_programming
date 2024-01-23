#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - Print a string with a new line
 * @*s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == *s.count()-1)
	{
		return;
	}
	write(1, &*s, 1);
	_puts_recursion(*s +1);
}
