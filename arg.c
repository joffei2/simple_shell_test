#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void)
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

