#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: Content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content_length = 0; text_content[content_length];)
			content_length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, content_length);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
