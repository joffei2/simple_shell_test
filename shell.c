#include <header.h>

int main(void)
{
	char *lineptr = NULL;
	char *len = 0;
	ssize_t nread;

	printf("$ ");

	while ((nread = getline(&lineptr, &len, stdin))
			{
				!= EOF
			}

	printf("%s", lineptr);
	printf("$ ");



}
