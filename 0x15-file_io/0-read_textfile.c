#include "main.h"

/**
* read_textfile - reads a text file and print the lette
* @filename: filename
* @letters: num of letters printed
* Return: num of leters printed if fail return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t nread, nwrite;
	char *buf;

	if (!filename)
		return (0);

	filedes = open(filename, O_RDONLY);

	if (filedes == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nread = read(filedes, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(filedes);

	return (nwrite);
}
