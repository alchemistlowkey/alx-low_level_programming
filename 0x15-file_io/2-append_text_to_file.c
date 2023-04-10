#include "main.h"

/**
 * append_text_to_file - A function that appends text to a file (end)
 * @filename: const character
 * @text_content: character
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k;

	if (filename == NULL)
	{
		return (-1);
	}
	k = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
	{
		close(k);
		return (1);
	}
	for (i = 0; *(text_content + i);)
	{
		i++;
	}
	j = write(k, text_content, i);
	close(k);
	if (j < 0)
	{
		return (-1);
	}
	return (1);
}
