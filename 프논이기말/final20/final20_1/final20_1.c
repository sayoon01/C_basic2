// 컴퓨터학과 20200990 윤상아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkWin(int);
int win(int b[][3]);
void display(int b[][3]);
int main(void)
{
	int r, c;
	int i, j;
	int table[3][3];
	char turn = 'X'; 

	int count = 0;
	int lose;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = 0;

	display(table);

	do
	{
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);
		printf("\n");

		if (table[r][c]) 
			continue;		

		count++; 

		if (turn == 'X') {

			table[r][c] = 1;
			turn = 'O';
		}
		else {
			table[r][c] = -1;
			turn = 'X';
		}
		display(table);

	} while ((lose = !win(table)) && count < 9);

	if (lose && count == 9)
		printf("Nobody wins!\n");
}
int checkWin(int sum)
{
	if (sum == 3) {
		printf("Player X wins!\n");
		return 1;
	}
	else if (sum == -3){
		printf("Player O wins!\n");
		return 1;
	}
	return 0; 
}
int win(int b[][3])
{
	int i, j;
	int total;

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 3; j++)
			total += b[i][j];

		if (checkWin(total))
			return 1;
	}

	for (j = 0; j < 3; j++)
	{
		total = 0;
		for (i = 0; i < 3; i++)
			total += b[i][j];
		if (checkWin(total))
			return 1;
	}
	
	// 대각선 
	total = 0;
	for (i = 0; i < 3; i++)
		total += b[i][i];

	if (checkWin(total))
		return 1;

	// 역대각선
	total = 0;
	for (i = 0; i < 3; i++)
	{
		total += b[i][2 - i];
	}
	if (checkWin(total))
		return 1;

	return 0;
}

void display(int b[][3])
{
	char ch;

	printf("    0 1 2\n");
	printf("   ------\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d |", i);
		for (int j = 0; j < 3; j++) {
			if (b[i][j] == 1)
				ch = 'X';
			else if (b[i][j] == -1)
				ch = 'O';
			else
				ch = ' ';
			printf(" %c", ch);
		}
		printf("\n");
	}
}
