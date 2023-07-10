#include "main.h"

/**
 * main - check the code
 * @argc: integer
 * @argv: character
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	char str[30];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: header filename\n");
		exit(98);
	}
	j = open(argv[1], O_RDONLY);
	if (j < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file\n");
		exit(98);
	}
	lseek(j, 0, SEEK_SET);
	i = read(j, str, 30);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file\n");
		exit(98);
	}
	close(j);
	return (0);
}
