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
	printf("Size of int: %zu byte(s)", sizeof(int));
    printf("Size of float: %zu byte(s)", sizeof(float));
    printf("Size of double: %zu byte(s)", sizeof(double));
    printf("Size of long: %zu byte(s)", sizeof(long));
    printf("Size of long long: %zu byte(s)", sizeof(long long));

	return (0);
}
