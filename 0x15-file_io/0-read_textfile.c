#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: text file input
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, wwrite, actlet;
	char *buff;

	buff = malloc(letters);

	if (!buff)
		return (0);
	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buff);
		return (0);
	}

	actlet = read(file, buff, letters);
	wwrite = write(STDOUT_FILENO, buff, actlet);

	if (wwrite == -1 || wwrite != actlet)
		return (0);

	close(file);
	return (wwrite);
}
