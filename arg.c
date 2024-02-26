#include "main.h"

void arg(char **argv)
{
	char *cmd = NULL;

	if (argv)
	{
		cmd = argv[0];

		if (execve(cmd, argv, NULL) == -1)
		{
			perror("Error");
		}
	}
}
{
	pid_t pid;
	pid = fork();
	char *argv[] = {"/bin/ls", "-l", NULL};

	if (pid == -1)
	{
		perror("fork was unseccesful");
			return (1);
	}
	
	if ( pid == 0)
	{
		int Rvalue = execve(argv[0], argv, NULL);

		if (Rvalue == -1)
			perror("unseccesful");
	}
	
	else 
	{
		wait(NULL);
		printf("execve succesful\n");
	}
	return (0);
}

