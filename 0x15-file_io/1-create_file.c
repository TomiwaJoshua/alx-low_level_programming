#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to write into the file
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t wwrite, oopen, len;

	len = 0;

	if (!text_content)
		text_content = "";
	if (!filename)
		return (-1);
	while (text_content[len])
		len++;

	oopen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (oopen == -1)
		return (-1);

	wwrite = write(oopen, text_content, len);
	if (wwrite == -1)
		return (-1);

	return (1);
}
