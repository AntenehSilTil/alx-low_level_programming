#include "main.h"

/**
 * flip_bits - counts bits
 * @n: initial number
 * @m: second number
 * Return: number of bits to change
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int total = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = total >> i;
		if (new & 1)
			count++;
	}

	return (count);
}
