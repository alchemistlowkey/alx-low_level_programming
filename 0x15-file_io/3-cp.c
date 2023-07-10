#include "main.h"

/**
 * main - check the code
 * @argc: integer
 * @argv: character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 1, j = -1, k = -1, err = 0, bt;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	j = open(argv[1], O_RDONLY);
	if (j < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	k = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (k < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	for (bt = 0; i;)
	{
		i = read(j, buff, 1024);
		if (i < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		else if (i == 0)
			break;
		bt = bt + i;
		err = write(k, buff, i);
		if (err < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close(k);
	return (0);
}
