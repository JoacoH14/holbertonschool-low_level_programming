#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - nada
 * @b: variable
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
