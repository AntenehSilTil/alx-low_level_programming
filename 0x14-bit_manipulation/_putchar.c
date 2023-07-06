#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c
 * @c: The character that will be printed
 * Return: On success 1
 * On error, -1
 **/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
