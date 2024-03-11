#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("    ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     ------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}
int is_in(char b)
{
	if (b == ' ')
		return 0;
	else
		return 1;
}
int winCheck(char b[][BOARD_SIZE],int r,int c)
{
	/*int i, j, k;

	for (i = 0; i < BOARD_SIZE; i++)
	{
		for (j = 0; j < BOARD_SIZE; j++)
		{
			for ( k = j; k < j + 5; k++)
			{
				if (b[i][k] != ch)
					return 0;

			}
			if (b[i][k] == ch)
				return 0;
			else if (j != 0 && b[i][j - 1] == ch)
				return 0;
			else
				return 1;

		}
	}*/

	int j, count = 0;

	for (j = 0; j < BOARD_SIZE; j++)
	{
		if (b[r][j] == b[r][c])
		{
			if (b[r][j + 1] == b[r][c])
				count++;
			else
				count = 0;
		}
		else
		{
			if (count == 5)
				return 1;
		}
	}
	return 0;
}
void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열) : ",turn);
		scanf("%d %d", &r, &c);

		if (is_in(board[r][c]))
			continue;

		board[r][c] = turn;
		display(board);

		if (winCheck(board, r,c))
		{
			printf("Player %c wins!\n", turn);
			return;
		}

		if (turn == 'X')
			turn = 'O';
		else
			turn = 'X';

		count++;


	} while (count <= BOARD_SIZE * BOARD_SIZE);

	printf("Nobody wins!");
	return;
}
