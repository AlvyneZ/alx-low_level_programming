#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define READ_TXT_BUFFER_SIZE	1024

/**
 * copy_file - copies data from one file to another given
 *  the file descriptors
 * @src: filde of file to be read
 * @dest: filde of file to be written to
 * @sfl: name of file to be read
 * @dfl: name of file to be written to
 */
void copy_file(int src, int dest, char *sfl, char *dfl)
{
	ssize_t rdcnt, wrcnt;
	char *dt;

	dt = malloc(READ_TXT_BUFFER_SIZE);
	if (dt == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sfl);
		exit(98);
	}
	for (rdcnt = 1; rdcnt;)
	{
		rdcnt = read(src, dt, READ_TXT_BUFFER_SIZE);
		if (rdcnt < 0)
		{
			free(dt);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sfl);
			exit(98);
		}
		wrcnt = write(dest, dt, rdcnt);
		if (wrcnt != rdcnt)
		{
			free(dt);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dfl);
			exit(99);
		}
	}
	free(dt);
}

/**
 * main- Copies data between files provided in command-line
 *  source is provided before destination
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *src, *dest;
	int src_filde, dest_filde, scl, dcl;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = argv[0];
	dest = argv[1];
	src_filde = open(src, O_RDONLY);
	if (src_filde < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dest_filde = open(dest, O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_filde < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	copy_file(src_filde, dest_filde, src, dest);
	scl = close(src_filde);
	dcl = close(dest_filde);
	if (scl)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_filde);
		exit(100);
	}
	if (dcl)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_filde);
		exit(100);
	}
	return (0);
}
