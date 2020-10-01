#include "slide_line.h"

/**
 * move_right - Function to move numbers to the right
 * @line: first number in line
 * @size: size of the array
 * Return: 1 success otherwise 0
 *
 */

int move_right(int *line, size_t size)
{
	int num1 = 0;
	int num2 = 0;
	size_t m = size - 1;
	size_t idx;

	for (idx = size - 1; idx < size; idx--)
	{
		if (line[idx] != 0 && num1 == 0)
		{
			num1 = line[idx];
		}
		else if (line[idx] != 0 && num1 != 0)
		{
			num2 = line[idx];
		}
		if (num1 != 0 && num2 != 0)
		{
			if (num1 == num2)
			{
				line[m--] = num1 + num2;
				num1 = 0;
				num2 = 0;
			}
			else
			{
				line[m--] = num1;
				num1 = num2;
				num2 = 0;
				if (idx == 0)
				{
					line[m--] = num1;
				}
			}

		}
		else if (num1 != num2 && idx == 0)
		{
			line[m--] = num1;
		}
	}
	for (idx = 0; idx < m + 1; idx++)
	{
		line[idx] = 0;
	}
	return (1);
}

/**
 * m_left - Function to m numbers to the left
 * @line: type pointer first number in line
 * @size: size of the array
 * Return: 1 success otherwise 0
 *
 */
int m_left(int *line, size_t size)
{
	int num1 = 0;
	int num2 = 0;
	size_t count = 0, idx;


	for (idx = 0; idx < size; idx++)
	{
		if (line[idx] != 0 && num1 == 0)
		{
			num1 = line[idx];
		}
		else if (line[idx] != 0 && num1 != 0)
		{
			num2 = line[idx];
		}
		if (num1 != 0 && num2 != 0)
		{
			if (num1 == num2)
			{
				line[count++] = num1 + num2;
				num1 = 0;
				num2 = 0;
			}
			else
			{
				line[count++] = num1;
				num1 = num2;
				num2 = 0;
				if (idx == size - 1)
				{
					line[count++] = num1;
				}
			}
		}
		else if (num1 != num2 && idx == size - 1)
		{
			line[count++] = num1;
		}
	}
	for (idx = count; idx < size; idx++)
	{
		line[idx] = 0;
	}
	return (1);
}

/**
 * slide_line - Function that moves and if apply sum int in the array
 * @line: array of integers
 * @size: number of elements in array
 * @direction: Macros SLIDE_LEFT, SLIDE_RIGHT
 * 
 * Return: 1 success 0 otherwise
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction == SLIDE_RIGHT)
	{
		return (m_right(line, size));
	}
	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
	{
		return (0);
	}
	return (m_left(line, size));
}
