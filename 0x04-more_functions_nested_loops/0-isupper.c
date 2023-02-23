#include "main.h"

/** _isupper - This checks whether a letter is upper case or not
 * @x: number to be checked
 * Return: 1 if upper case or 0 for lower case
 */

int _isupper(int x)

{

	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
