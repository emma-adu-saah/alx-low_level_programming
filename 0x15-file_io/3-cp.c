#include "main.h"
/**
 *main - Copies the content of a file to another file
 *@argc: Arguement count
 *@argv: Array of arguments.
 *Return: An integer, depending on file's accessibility
 **/
int main(int argc, char **argv)
{
	char buffer[1024];
	int file_from, file_to;
	ssize_t bytes_read = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[3]);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
	write(file_to, buffer, bytes_read);
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[3]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[3]);
		exit(100);
	}
	return (0);
}
