#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	printf("Before fork was called, I was single\n");

	pid = fork();

	if (pid == -1)
	{
		perror("fork was unsuccesful");
		return (1);
	}

	printf("After fork was called, I became two");
	return (0);
}
