#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @str: An input string
 * Return: Nothing
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
