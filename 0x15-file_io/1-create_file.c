#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: the name of the file to create
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1
 * Otherwise - 1.
**/

int create_file(const char *filename, char *text_content)

{
	int x, r, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(x, text_content, l);

	if (x == -1 || r == -1)
		return (-1);

	close(x);

	return (1);
}
