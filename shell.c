#include "main.h"

int main(void)
{
	char *lineptr = NULL;
	ssize_t len = 0;

	printf("$ ");

	while ((getline(&lineptr, &len, stdin) != EOF))
			{
			printf("%s", lineptr);
			printf("$ ");
			}

			free(lineptr);

			return(0);
			}
