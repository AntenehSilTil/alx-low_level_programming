#include "main.h"

/**
 * _isdigit - It checks whether a character is a digit or not
 * @x: the character to be checked
 * Return: 1 for a digit and 0 for any other
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
