#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line
 *@argc:argument count
 *@argv:argument vector
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int ia, b, sum;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;
	printf("%d\n", sum);
return (0);
}
