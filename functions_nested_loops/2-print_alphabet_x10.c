#include"main.h"
/**
 * print_alphabet_x10 - nada
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
