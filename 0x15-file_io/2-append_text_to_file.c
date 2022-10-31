#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to write into the file
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oopen, len;

	len = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		text_content = "";
	}

	while (text_content[len])
		len++;

	oopen = open(filename, O_WRONLY | O_APPEND);
	if (oopen == -1)
		return (-1);
	write(oopen, text_content, len);

	return (1);
}
