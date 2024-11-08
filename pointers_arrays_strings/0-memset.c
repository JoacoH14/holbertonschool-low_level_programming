#include"main.h"
/**
 * _memset - nada
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: memory
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
