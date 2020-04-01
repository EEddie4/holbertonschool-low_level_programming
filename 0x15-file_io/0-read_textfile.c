#include "holberton.h"
/**
* read_textfile - function
* @filename: file to read
* @letters: # of letters should read/print
*
* Description: func to read and print to stdout
* Return: # of letters actually read/print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, sz, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, letters);
	if (fd == -1)
		return (0);

	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	sz = read(fd, buff, letters);
	if (sz == -1)
		return (0);
	wr = write(STDOUT_FILENO, buff, letters);
	if (wr == -1)
		return (0);

	if (wr != sz)
		return (0);

	buff[sz] = '\0';
	free(buff);
	close(fd);
	return (sz);
}
