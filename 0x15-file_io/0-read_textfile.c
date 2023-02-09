#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define READ_TXT_BUFFER_SIZE	64

/**
 * bufless_read_text - reads from an open file and prints it to the
 *  POSIX standard output without using a buffer
 * @letters: number of letters to be read and printed
 * @filde: file descriptor of open file
 * Return: the number of read and printed letters, or
 *  0 on failure of writing or reading
 */
size_t bufless_read_text(size_t letters, int filde)
{
	char a;
	size_t cnt;
	ssize_t rdcnt, wrcnt;

	for (cnt = 0; cnt < letters; cnt++)
	{
		rdcnt = read(filde, &a, 1);
		if (rdcnt < 0)
			return (0);
		wrcnt = write(STDOUT_FILENO, &a, 1);
		if (wrcnt != rdcnt)
			return (0);
	}
	return (cnt);
}

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
	char *dt;

	if (filename == NULL)
		return (0);
	filde = open(filename, O_RDONLY);
	if (filde < 0)
		return (0);
	dt = malloc(READ_TXT_BUFFER_SIZE);
	if (dt == NULL)
	{
		cnt = bufless_read_text(letters, filde);
	}
	else
	{
		for (cnt = 0; cnt < letters; cnt += rdcnt)
		{
			rdcnt = read(filde, dt, (((letters - cnt) < READ_TXT_BUFFER_SIZE) ?
				(letters - cnt) : READ_TXT_BUFFER_SIZE));
			if (rdcnt < 0)
			{
				cnt = 0;
				break;
			}
			if (rdcnt == 0)
				break;
			wrcnt = write(STDOUT_FILENO, dt, rdcnt);
			if (wrcnt != rdcnt)
			{
				cnt = 0;
				break;
			}
		}
		free(dt);
	}
	close(filde);
	return (cnt);
}
