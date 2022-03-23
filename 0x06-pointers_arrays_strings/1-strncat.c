#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (n > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		n--;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
