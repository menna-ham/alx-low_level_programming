#include <stdio.h>
/**
 * main - starting point of the program
 *
 * Return: 0
 */
int main(void)
{
	int counter;

	counter = 0;

	while (counter <= 9)
	{
		putchar(counter + '0');
		counter++;
	}
	putchar('\n');

	return (0);
}
