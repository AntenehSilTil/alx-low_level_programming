#include "main.h"

/**
 * print_sign - this function prints the sign of a given number
 * @n : This is the input number to check
 * Return: int
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

