#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		len += strlen(av[i]) + 1;
		i++;
	}
	ar = (char *) malloc(len * sizeof(char));
	i = 0;
	while (i < ac)
	{
		strcat(ar, av[i++]);
		strcat(ar, "\n");
	}
	if(!ar)
		return (NULL);
	return (ar);
}
