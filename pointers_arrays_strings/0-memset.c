#include"main.h"
/**
 * _memset - nada
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: memory
 */
char *_memset(char *s, char b, unsigned int n)
{	
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
