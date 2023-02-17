#include <stdio.h>

/**
 * main - A  program that prints the size of various types on the computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int b;
	long long int d;
	float f;

	printf("The size of an char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of an long int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of an long long int is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of an float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
