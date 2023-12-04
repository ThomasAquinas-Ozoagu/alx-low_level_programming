#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>


/**
 * append_text_to_file -  appends text at the end of a file.
 *
 * @filename: the name of the file
 *
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr_status, qty = sizeof(text_content);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	wr_status = write(fd, text_content, qty);
	if (wr_status == -1)
		return (-1);

	return (1);
}
