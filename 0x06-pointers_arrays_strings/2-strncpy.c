#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dst: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dst, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
