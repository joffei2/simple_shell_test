#include "main.h"

int main(int ac, char **argv)
{
	char *lineptr = NULL;
	ssize_t len = 0;
	char *copy_lineptr = NULL;
	constant char *delim = " \n";
	int counter;
	char *cache;
	int i;

	(void)ac;

	printf("$ ");

	while ((getline(&lineptr, &len, stdin) != EOF))
	{
		printf("%s", lineptr);
		printf("$ ");
	}

	if (copy_lineptr == NULL)
	{
		perror("Unable to allocate memory");
		return (-1);
	}

	strcpy(copy_lineptr, lineptr);

	token = strtok(lineptr, delim);

	while (cache != NULL)
	{
		counter++;
		cache = strtok(NULL, delim);
	}
	counter++;

	argv = malloc(sizeof(char *) * counter);

	token = strtok(copy_lineptr, delim);

	for (i = 0, cache != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(cache));
		strcpy(argv[i], cache);
		cache = strtok(NULL, delim);
	}
	argv[i] = NULL;

	arg(argv)


		free(lineptr);
	free(copy_lineptr);

	return(0);
}
