#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: is used to read text file
 * @letters: the no. letters that will be read
 * Return: r- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t l;
	ssize_t r;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (l == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(l, buf, letters);
	r = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(l);
	return (r);
}

