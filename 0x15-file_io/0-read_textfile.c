#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: text
 * @letters: number of letters
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, wr, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (wr);
}
