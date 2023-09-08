#include "main.h"

/**
 * create_file - A file is created with this command
 * @text_content: A pointer points to a string
 * @filename: A pointer points to the name of the file
 * Return: on failure - -1.
 *        else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int var, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	var = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0601);
	x = write(var, text_content, len);

	if (var == -1 || x == -1)
		return (-1);

	close(var);

	return (1);
}
