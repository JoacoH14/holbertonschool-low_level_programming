#include"main.h"
/**
 * more_numbers - nada
 */
void more_numbers(void)
{
	int num, nam = 0;

	for (nam = 0; nam <= 9; nam++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('1');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}