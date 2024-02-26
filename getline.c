#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer = NULL;
	size_t size = 0;

	printf("Please enter your name: ");

	getline(&buffer, &size, stdin);

	printf("Your name is %s\n", buffer);
	free(buffer);

	return(0);
}
