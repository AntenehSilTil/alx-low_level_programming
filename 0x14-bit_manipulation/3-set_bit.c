#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: pointer to the number to change
 * @i: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int i)
{
	if (i > 63)
		return (-1);

	*n = ((1UL << i) | *n);
	return (1);
}

