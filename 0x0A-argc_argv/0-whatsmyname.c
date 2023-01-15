#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number arguements
 * @argv: array of arguements
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
