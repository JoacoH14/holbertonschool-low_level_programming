#include"main.h"
/**
 * @_strcpy: variable
 * @dest: variable
 * @src: variable
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