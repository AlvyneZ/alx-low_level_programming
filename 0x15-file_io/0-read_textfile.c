#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define READ_TXT_BUFFER_SIZE	64

/**
 * read_textfile - reads a text file and prints it to the
 *  POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters to be read and printed
 * Return: the number of read and printed letters, or
 *  0 on failure of opening or writing or Null filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filde;
	size_t cnt;
	ssize_t rdcnt, wrcnt;
	char *dt, a;

	if (filename == NULL)
		return (0);
	filde = open(filename, O_RDONLY);
	if (filde < 0)
		return (0);
	dt = malloc(READ_TXT_BUFFER_SIZE);
	if (dt == NULL)
	{
		for (cnt = 0; cnt < letters; cnt++)
		{
			rdcnt = read(filde, &a, 1);
			if (rdcnt < 0)
				return (0);
			wrcnt = write(STDOUT_FILENO, &a, 1);
			if (wrcnt != rdcnt)
				return (0);
		}
	}
	else
	{
		for (cnt = 0; cnt < letters; cnt += rdcnt)
		{
			rdcnt = read(filde, dt, READ_TXT_BUFFER_SIZE);
			if (rdcnt < 0)
				return (0);
			wrcnt = write(STDOUT_FILENO, dt, rdcnt);
			if (wrcnt != rdcnt)
				return (0);
		}
		free(dt);
	}
	return (cnt);
}
