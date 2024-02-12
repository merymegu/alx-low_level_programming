
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int fd1, fd2;
	int read, close_src, close_dest;
	char buffer[1024];

	if (argc > 3 || argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(*(argv + 1), O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	fd2 = open(*(argv + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((read = read(fd1, buffer, 1024)) > 0)
	{
		if (fd2 == -1 || (write(fd2, buffer, read) != read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(argv + 2));
			exit(99);
		}
	}
	if (read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	close_src = close(fd1);
	if (close_src < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	close_dest = close(fd2);
	if (close_dest < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);
	return (0);
}
