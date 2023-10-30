#include "main.h"

char *create_buffer(char *file);
void close_file(int a);

/**
 * main - copies file contents to a new file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int current, new, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	current = open(argv[1], O_RDONLY);
	rd = read(current, buffer, 1024);
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (current == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(new, buffer, rd);
		if (new == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(current, buffer, 1024);
		new = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_file(current);
	close_file(new);
	return (0);
}

/**
 * create_buffer - creates a buffer to store copied characters
 * @file: file containing characters
 * Return: pointer to the buffer
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - closes files
 * @a: file to be closed
 * Return: void
 */

void close_file(int a)
{
	int i;

	i = close(a);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
}
