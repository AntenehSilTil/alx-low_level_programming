#include "main.h"

/**
 * get_endianness - checks whether little or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
