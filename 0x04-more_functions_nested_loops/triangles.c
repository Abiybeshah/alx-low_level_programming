#include <stdio.h>
/**
* main - Entry point this is a test for the project
*
* Return: 0 always
*/

int main(void)
{
	int size;
	int i;
	int e;
	int ns;

	size = 5;

	for (i = size ; i > 0 ; i--)
	{
		for (e = (size - 1) ; e > 0 ; e--)
		{
			printf(" ");

		for (ns = 1 ; ns != size ; ns++)
		{
			printf("#");
			printf("\n");
		}
		}
	}
	printf("\n");
	return (0);
}
