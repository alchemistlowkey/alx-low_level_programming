#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: const character
 * @text_content: character
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, k;

	if (filename == NULL)
	{
		return (-1);
	}
	k = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	for (i = 0; text_content && *(text_content + i);)
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
