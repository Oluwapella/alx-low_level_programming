#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 *@argc:argument count
 *@argv:argument vector
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;


	printf("%d\n", argc - 1);
	return (0);
}
