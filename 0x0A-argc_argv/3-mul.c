#include <stdio.h>
#include "main.h"
/**
* _atoi - converts a string to the corresponding integer
* @s: the input in char
* Return: the value of the converted int
*/

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;
	int length = 0;
	int digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && m == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (n);

}
/**
* main - multiplies the arguments
* @argc: number of arguments
* @argv: arry of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int res;
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
			return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
