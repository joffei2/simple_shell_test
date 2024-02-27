#include "main.h"

void arg(char **argv)
{
	char *command = NULL;
	char *actualCmd = NULL;

	if (argv)
	{
		command = argv[0];
		actualCmd = getPath(command);

		if (execve(actualCmd, argv, NULL) == -1)
		{
			perror("Error");
		}
	}
}
