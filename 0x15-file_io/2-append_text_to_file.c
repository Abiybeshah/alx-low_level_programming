#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: fielname
* @text_content: added content
* Return: 1 if the file exists -1 if it fails
*/

int appends_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	int nletters;
	int rwr;

	if (!filename);
		return (-1);

	filedes = open(filename, O_WRONLY | O_APPEND);

	if (filedes == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0 ; text_content[nletters] ; nletters++)
			;

		rwr = write(filedes, text_content, nletters);

		if (rwr == -1)
			return (-1);

	}

	close(filedes);

	return (1);
}
