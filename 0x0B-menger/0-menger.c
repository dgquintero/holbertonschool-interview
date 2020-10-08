#include "menger.h"

/**
 * menger - function that draws a 2D Menger Sponge
 * @level: level of the Menger Sponge to draw
 * Return: if level is lower than 0, your function must do nothing
 */
void menger(int level)
{
	int i, j;
	int size = pow(3, level);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%c", menger_char(i, j));
		}
		printf("\n");
	}
}

/**
 * menger_char - Function to print the character #
 * @i: the i value
 * @j: the j value
 * Return: the character to print
 */
char menger_char(int i, int j)
{
	while (i && j)
	{
		if (i % 3 == 1 && j % 3 == 1)
			return (' ');

		i /= 3;
		j /= 3;
	}
	return ('#');
}
