#include "main.h"
/**
* argstostr - function that concatenates all the arguments of your program
* @ac: size of pointer
* @av: pointer
* Return: New string
*/
char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, total_len;
	int current_pos = 0;

	total_len = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]);
	}
	new_str = (char *)malloc(total_len + ac + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(new_str + current_pos, av[i]);
		current_pos += strlen(av[i]);
		new_str[current_pos++] = '\n';
	}
	new_str[current_pos - 1] = '\0';
	return (new_str);
}
