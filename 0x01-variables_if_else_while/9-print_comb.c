#include <stdio.h>

/**
 * main - print all combination of single digit number
 * Return: always 0
 */

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
		if (z != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
