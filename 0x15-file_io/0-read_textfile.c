#include "main.h"
/**
* read_textfile - function that reads a file and writes to POSIX
* @filename: filename texting
* @letters: num of letters printed
* Return: num of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int form;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	form = open(filename, O_RDONLY);

	if (form == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(form, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(form);
	free(buff);

	return (nwr);

}
