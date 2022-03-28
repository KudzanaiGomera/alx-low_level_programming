#include "main.h"
#include <stddef.h>

/**
 * _memcpy - a function that copys memory area
 * @dst: memory area destination to copy
 * @src: memory area source to copy from
 * @len: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dst, char *src, unsigned int len)
{
	char *s1;
	const char *s2;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	s2 = (const char *)src;
	while (len--)
	{
		*s1++ = *s2++;
	}
	return (dst);
}
