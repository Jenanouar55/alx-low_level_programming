#include "main.h"

/**
 * read_textfile - reads text file and prints out to the standard output
 * @filename: filename
 * @letters: number of letters to read and print
 * Return: the number of printed charaters, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r_count, w_count;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);


	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	r_count = read(fd, buff, letters);
	if (r_count < 0)
	{
		free(buff);
		return (0);
	}
	buff[r_count] = '\0';
	close(fd);
	w_count = write(STDOUT_FILENO, buff, r_count);
	if (w_count < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (w_count);
}
