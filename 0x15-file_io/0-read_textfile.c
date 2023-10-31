#include "main.h"
/**
 *read_textfile - Reads text file and prints it to the POSIX
 *@filename: Path to text file
 *@letters: Number of letters it should read and print
 *Return: The actual number it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer = (char *)malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY, S_IRUSR);
	if (fd == -1)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, letters);
	if (bytes_written == -1)
	{
		return (0);
	}
	return (bytes_read);
}
