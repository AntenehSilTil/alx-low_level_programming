#include "main.h"

/**
 * print_line - It creates a straignt line
 * @n: number of lines to draw
 * Return:empty
 */

void print_line(int n);

{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
