#include "main.h"

/**
* print_chessboard - function that prints the chessboard.
* @a: is a pointer to an array of 8 characters
* Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
