#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this function reads text file and it prints it to STDOU
 * @filename: the text file is being read
 * @letters: the number of letters it should read and print
 * Return: d- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
        ssize_t d;
        ssize_t m;
	char *buf;
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(n, buf, letters);
	d = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(n);
	return (d);
}

