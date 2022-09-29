#include "main.h"

/**
 * _puts_recursion - this rints a string, then a new line
 * @s: -string to be printed
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
