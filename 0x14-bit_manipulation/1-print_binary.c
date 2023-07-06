#include "main.h"

/**
 * print_binary - prints the binary number
 * @y: number to print
**/

void print_binary(unsigned long int y)
{
	int i, count = 0;
	unsigned long int new;

	for (i = 63; i >= 0; i--)
	{
		new = y >> i;

		if (new & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
