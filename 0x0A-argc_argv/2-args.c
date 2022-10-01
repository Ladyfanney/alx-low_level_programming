#include "main.h"
#include <stdio.h>

/**
 * main - this prints all argumets
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
