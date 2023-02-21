#include "main.h"

/**
 * _isalpha - it checks for a lower case letter
 * @c : is a character to check
 * Return: 0 or 1
 */

int _isalpha(int c)

{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
