#include <stdio.h>
#include <stdlib.h>
/**
* main - prints its own opcodes
* @argc: num of args
* @argv: array of args
* Return: always 0 success
*/

int main(int argc, char *argv[])
{
	int byte;
	int i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0 ; i < byte ; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
