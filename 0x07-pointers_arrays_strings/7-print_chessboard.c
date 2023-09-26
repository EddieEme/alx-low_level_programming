#include "main.h"

/**
* print_chessboard - function that prints the chessboard.
* @a: is a pointer to an array of 8 characters
* Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			_putchar(' ');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
