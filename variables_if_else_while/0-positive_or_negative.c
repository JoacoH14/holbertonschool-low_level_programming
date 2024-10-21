#include <stdlib.h>
#include <time.h>
/*
 * main - nada
 * Return: 0
**/
/*
*sentencia if combinado con printf muestra la salida dependiendo del valor de n
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf(n + "es positivo");
	};
	else
	{printf(n + "es negativo")};
	while (n = 0, printf(n + "es cero"))
	return (0);
}
