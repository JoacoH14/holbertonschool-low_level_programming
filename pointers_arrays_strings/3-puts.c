#include"main.h"
/**
 * _puts - nada
 * @str: variable
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
