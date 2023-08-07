#include "main.h"

/**
 * read_textfile - hat reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the text file to read
 * @letters: The maximum of bytes to read and print
 *
 * Return: The number of bytes read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *taille_file;
	ssize_t bytes_read;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	taille_file = malloc(sizeof(char) * letters);

	if (taille_file == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(file, taille_file, letters);
	if (bytes_read > 0)
	{
		printf("%s\n", taille_file);
	}
	else
	{
		printf("Fail to read");
	}
	free(taille_file);
	close(file);
	return (bytes_read);
}
