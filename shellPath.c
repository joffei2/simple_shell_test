#include "main.h"

char *getPath(char *command)
{
	char *path;
	char *copy_path;

	path = getenv("PATH");
