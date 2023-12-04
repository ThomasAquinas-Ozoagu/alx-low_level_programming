#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a file & prints it to the POSIX standard output.
 * @filename: The file to be read
 * @letters: the number of characters to be read and printed
 * Return: the number of characters successfully read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int qtyread, qtywrite, closed;
	char *buf;

	if (filename == NULL) /*Confirm that a file with content was provided*/
	{
		printf("filename = NULL");
		return (0);
	}
/* create space to store the letters */
	buf = malloc(letters * sizeof(char));
	if (!buf)
	{
		printf("Malloc failed\n");
		return (-1); /* Check if creating the space worked*/
	}
	fd = open(filename, O_RDONLY); /* Open the file */
	if (fd == -1)
		return (0);
	qtyread = read(fd, buf, letters);
	if (qtyread == -1)
		return (0);
	qtywrite = write(STDOUT_FILENO, buf, qtyread);
	if (qtywrite !=  qtyread)
		return (0);
	free(buf); /* Deallocate the temp storage*/
	closed = close(fd);
	return (qtywrite); /* Return quantity read*/
}
