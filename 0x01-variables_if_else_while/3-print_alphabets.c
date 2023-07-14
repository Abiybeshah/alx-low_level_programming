#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char beta;

	beta = 'a';
	while (beta <= 'Z')
{
	putchar(beta);
	beta++;
}
putchar('\n');
	return (0);
}
