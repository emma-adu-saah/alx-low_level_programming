#include "main.h"
/**
 *create_file - Creates a file
 *@filename: Name of the file to be created
 *@text_content: Content to write to the file
 *Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[text_len] != '\0')
	{
		text_len++;
	}
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
