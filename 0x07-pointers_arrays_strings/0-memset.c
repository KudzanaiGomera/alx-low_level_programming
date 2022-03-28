#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @b: location to fill
 * @c: char to fill location with
 * @len: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(void *b, int c, unsigned int len)
{
	unsigned char *str;
	unsigned char a;

	str = (unsigned char *)b;
	a = (unsigned char)c;
	while (len > 0)
	{
		len--;
		*str = a;
		str++;
	}
	return (b);
}
