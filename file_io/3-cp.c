#include "main.h"

/**
 * open_source_file - Opens the source file for reading
 * @filename: Name of the source file to open.
 *
 * Return: File descriptor if successful, -1 on error.
 */
int open_source_file(char *filename)
{
	int fd = 0;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	}
	return (fd);
}

/**
 * open_destination_file - Opens the destination file for writing.
 * @filename: Name of the destination to open
 *
 * Return: File descriptor if sucessful, -1 on error
 */
int open_destination_file(char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
	}
	return (fd);
}

/**
 * copy_file_content - Copies content from source file to destination file.
 * @source_fd: file descriptor of the ssource file
 * @destination_fd: File descriptor of the destination file
 *
 * Return: 0 on sucess, 98if read error, 99 if write error
 */
int copy_file_content(int source_fd, int destination_fd)
{
	char buffer[1024];
	ssize_t bytes_read;

	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(destination_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", destination_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}

	return (0);
}

/**
 * main - entry point of the program to copy content from one file to another
 * @argc: Number of command-line arguments
 * @argv: array of comman-line argument strings
 *
 * Return: 0 on sucess, other values on failure
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int source_fd, destination_fd;
	int copy_result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	source_fd = open_source_file(file_from);
	if (source_fd == -1)
	{
		exit(98);
	}

	destination_fd = open_destination_file(file_to);
	if (destination_fd == -1)
	{
		close(source_fd);
		exit(99);
	}

	copy_result = copy_file_content(source_fd, destination_fd);

	if (close(source_fd) == -1 || close(destination_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (copy_result);
}
