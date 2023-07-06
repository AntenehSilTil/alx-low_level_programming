#include "main.h"

/**
 * binary_to_uint - converts a binary number to int
 * @s: string number
 * Return: the converted number
 **/

unsigned int binary_to_uint(const char *s)
{
	int i;
	unsigned int d = 0;

	if (!s)
		return (0);

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '1')
			return (0);
		d = 2 * d + (s[i] - '0');
	}

	return (d);
}
