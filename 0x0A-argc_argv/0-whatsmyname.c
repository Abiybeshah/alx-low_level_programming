#include <stdio.c>
#include "main.h"
/**
* main - prints the name of the program
* @argc: number of arguments
* @argv: arrays of arguments
* Return: Always 0
*/

int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
