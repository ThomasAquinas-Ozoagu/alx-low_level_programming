#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a file & prints it to the POSIX standard output.
 * @filename: The file to be read
 *
 * @letters: the number of characters to be read and printed
 *
 * Return: the number of characters successfully read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int qtyread, qtywrite;
	char *buf;

/*	printf("About to read: %ld\n", letters); */
/* Confirm that a file with content was provided */
	if (filename == NULL)
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

/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

/* Proceed to read specified number of letters from the file*/
	qtyread = read(fd, buf, letters);
	if (qtyread == -1)
		return (0);
/*	printf("Successfully read: %d\n", qtyread); */


	qtywrite = write(STDOUT_FILENO, buf, qtyread);
/*	printf("\nSuccessfully wrote: %d\n", qtywrite); */
	if (qtywrite !=  qtyread)
	{
		printf("\n******************\nWrite failed\n");
		return (0);
	}


	free(buf); /* Deallocate the temp storage*/

	return (qtywrite); /* Return quantity read*/
}
