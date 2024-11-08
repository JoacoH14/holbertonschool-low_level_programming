#include"main.h"
/**
 * _memset - nada
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
