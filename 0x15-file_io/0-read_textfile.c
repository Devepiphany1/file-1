#include "main.h"
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text that prints to standard input
 * @filename: reads text files
 * @letters: actual num of letter read
 * Return: returns actual num of bytes printed
 *       when function nulls or fails 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t var;
	ssize_t y;
	ssize_t x;

	var = open(filename, O_RDONLY);
	if (var == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	x = read(var, buf, letters);
	y = write(STDOUT_FILENO, buf, x);

	free(buf);
	close(var);
	return (y);
}

