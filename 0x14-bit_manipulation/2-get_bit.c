#include "main.h"

/**
 * get_bit - returns the value of the bit
 * @a: number to search
 * @i: index of the bit
 * Return: value of the bit
**/

int get_bit(unsigned long int a, unsigned int i)
{
	int bvalue;

	if (i > 63)
		return (-1);

	bvalue = (a >> i) & 1;

	return (bvalue);
}
