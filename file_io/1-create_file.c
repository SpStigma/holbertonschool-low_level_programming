#include "main.h"

/**
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd = -1;
	ssize_t bytes_written = 0;
	size_t content_size = 0;
	char *current = NULL;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open("filename", O_WRONLY | O_CREAT | O_TRUNC);

	if (fd == -1)
	{
		return (-1);
	}
	
	current = text_content;

	while (*current != '\0')
	{
		content_size++;
		current++;
	}

	bytes_written = write(fd, text_content, content_size);

	close(fd);

	if (bytes_written == -1)
	{

		close(fd);
		return (-1);
	}
	return (0);
}
