#include<unistd.h>
/**
 * main - nada
 * Return: 0
 */

int main(void)
{
	const char str[] = "_putchar\n";

	write(1, str, sizeof(str) - 1);


	return (0);
}
