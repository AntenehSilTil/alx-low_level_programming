#include "main.h"

/**
 * clear_bit - sets value to 0
 * @x: pointer to the number to change
 * @i: index of the bit to clear
 * Return: 1 for success, -1 for failure
**/

int clear_bit(unsigned long int *x, unsigned int i)
{
	if (i > 63)
		return (-1);

	*x = (~(1UL << i) & *x);
	return (1);
}

