#include "main.h"

char *getPath(char *command)
{
	char *path; *filePath
		char *copy_path;
	int cmdLenght;
	char *pathToken;
	int directoryLenght;
	struct stat buffer;

	path = getenv("PATH");

	if(path)
	{
		copy_path = strdup(path);

		cmdLenght = strlen(command);

		pathToken = strtok(copy_path, ":");

		while(pathToken != NULL)
		{
			directoryLenght = strlen(pathToken);

			filePath = malloc(commandLenght + directoryLenght + 2);

			strcpy(filePath, pathToken);
			strcat(filePath, "/");
			strcat(filePath, command);
			strcat(filePath, "\0");

			if (stat(filePath, &buffer) == 0)
			{
				free(copyPath);
				return (filePath);
			}
			else
			{
				free(filePath);
				pathToken = strtok(Null, ":");
			}
		}
		free(copy_path):

			if (stat(command, &buffer) == 0)
			{
				return (command);
			}
		return (NULL);
	}
	return (NULL);
}
