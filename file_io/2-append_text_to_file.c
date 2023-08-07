#include "main.h"

/**
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = -1;
	int size = 0;
	int bytes_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[size] != '\0')
	{
		size++;
	}

	bytes_written = write(fd, text_content, size);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
