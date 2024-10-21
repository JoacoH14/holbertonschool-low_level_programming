#include<stdio.h>
/**
 * main - nada
 * Return: 0
 */
int main(void)
	{
	/**
	 *uso printf en cada linea para mostrar cada tipo de dato
	*/
	printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));

	return (0);
}
