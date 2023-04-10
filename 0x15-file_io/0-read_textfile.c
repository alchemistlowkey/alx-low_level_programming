#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints to stdout
 * @filename: const character
 * @letters: size_t
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t i, j, k;

	if (filename == NULL)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}
	k = open(filename, O_RDONLY);
	j = read(k, str, letters);
	i = write(STDOUT_FILENO, str, j);
	free(str);
	close(k);
	if (i < 0)
	{
		return (0);
	}
	return (i);
}
