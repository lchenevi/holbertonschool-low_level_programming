#include <stdio.h>

/**
 * main - prints name program
 * @argc: unused
 * @argv: array argument
 *
 * Return: always 0
 */
int main (int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
