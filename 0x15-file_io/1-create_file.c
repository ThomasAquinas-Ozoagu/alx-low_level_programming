#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/* #include <stdlib.h> */
/* #include <sys/types.h> */
/* #include <string.h> */


/**
 * create_file - creates a file
 *
 * @filename: name of file to be created
 *
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written,
 * write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, outcome;
	int nbyte = sizeof(text_content);

/*	printf("File name is %s\n", filename); */
	if (filename == NULL)
		return (-1); /* Check if file with content was provided*/

/*	printf("Before OPEN, fd = %d\n", fd); */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600); /*  Open file */
/*	printf("After OPEN, fd = %d\n", fd); */

	if (text_content != NULL)
	{
		outcome = write(fd, text_content, nbyte);
		if (outcome == -1)
			return (-1);
	}
	return (1);
}
