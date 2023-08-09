#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check - check if it is a number
* @str: array str
* Return: Always 0
*/

int check(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
* main - print the name of the program
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int count;
	int conv;
	int sum;

	count = 1;
	while (count < argc)
	{
		if (check(argv[count]))
		{
			conv = atoi(argv[count]);
			sum += conv;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}