#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* _strlen - Gets the length of a string
 * @s: String whose length is required
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int ind;

	for (ind = 0; (*(s + ind) != '\0'); ind++)
	;
	return (ind);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: text file to be written to
 * @text_content: string to write into the file
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filde, wrcnt, len;

	if (filename == NULL)
		return (-1);
	filde = open(filename, O_WRONLY | O_APPEND);
	if (filde < 0)
		return (-1);
	if (text_content == NULL)
		len = 0;
	else
		len = _strlen(text_content);
	if (len)
	{
		wrcnt = write(filde, text_content, len);
		close(filde);
		if (wrcnt != len)
			return (-1);
	}
	return (1);
}
