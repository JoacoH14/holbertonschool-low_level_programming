#include"main.h"
/**
 * print_numbers - nada
 * @num: variable numerica
 * Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
