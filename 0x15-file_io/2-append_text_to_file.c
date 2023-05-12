#include "main.h"

/**
* append_text_to_file - a function that appends
*text at the end of a file
* @filename: the file name
* @text_content: is the NULL terminated string
*to add at the end of the file
* Return: 1 on success, -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int m, res, length;

	if (filename == NULL)
		return (-1);
	m = open(filename, O_WRONLY | O_APPEND);
	if (m == -1)
		return (-1);
	if (!text_content)
		return (1);
	length = 0;
	while (text_content[length])
		length += 1;
	res = write(m, text_content, length);
	if (res == -1)
		return (-1);
	res = close(m);
	if (res == -1)
		return (-1);
	return (1);
}
