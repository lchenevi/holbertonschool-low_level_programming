#include <stdio.h>

/**
 * main - prints name program
 * @argc: unused
 * @argv: array argument
 *
 * Return: allway 0
 */
int main (int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
