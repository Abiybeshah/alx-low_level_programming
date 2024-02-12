#include "main.h"

/**
* append_text_to_file - that appends text at the eof
* @filename: variable pointer
* @text_content: content file
* Return: 1 on success, -1 on fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fi;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		++i;
	fi = open(filename, O_WRONLY | O_APPEND);

	if (fi == -1)
		return (-1);

	write(fi, text_content, i);

	return (1);
}
