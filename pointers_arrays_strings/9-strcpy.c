#include"main.h"
/**
 * _strcpy - nada
 * @dest: variable
 * @src: variable
 * Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
