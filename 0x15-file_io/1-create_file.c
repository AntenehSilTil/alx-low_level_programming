#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Is used asa pointer for  the file to create.
 * @text_content: This is a pointer.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int d, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(d, text_content, len);

	if (d == -1 || r == -1)
		return (-1);

	close(d);

	return (1);
}

