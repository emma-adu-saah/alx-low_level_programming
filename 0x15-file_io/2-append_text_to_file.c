#include "main.h"
/**
 *append_text_to_file - Appends text to the end of a file
 *@filename: File to append text to
 *@text_content: Content to append to file
 *Return: 1 on success -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[length] != '\0')
	{
		length++;
	}
	write(fd, text_content, length);
	close(fd);
	return (1);
}
