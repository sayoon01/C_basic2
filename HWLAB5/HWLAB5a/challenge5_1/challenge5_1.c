// 컴퓨터학과 윤상아 20200990
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>

char askReservation();
void processReservation(int s[][10], int size, int c, int r);
void printSeats(int s[][10], int size);
int main(void)
{
	int r, c;
	int seats[SIZE][10] = { 0 };

	printf("******좌석 예약 시스템******\n");

	while (askReservation() == 'y')
	{
		printSeats(seats, SIZE);

		printf("몇번째 좌석을 예약하시겠습니까? (열 행)의 형태로 입력 :  ");
		scanf("%d %d", &r, &c);

		processReservation(seats, SIZE, r, c);

		while (getchar() != '\n'); // 버퍼 비움
	}
}

char askReservation()
{
	char choice;

	printf("좌석을 예약하시겠습니까?(y/n) ");
	scanf("%c", &choice);

	return choice;
}

void processReservation(int s[][10], int size, int r, int c)
{
	if (s[r - 1][c - 1] == 0) {
		s[r - 1][c - 1] = 1;
		printf("예약되었습니다\n");

		printSeats(s, size);
	}
	else
		printf("이미 예약된 자리입니다\n");
}

void printSeats(int s[][10], int size)
{
	printf("--------------------------------------------\n");
	printf("     1   2   3   4   5   6   7   8   9   10\n");
	printf("--------------------------------------------\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", i + 1);
		for (int j = 0; j < 10; j++)
			printf("   %d", s[i][j]);
		printf("\n");
	}
	printf("\n");
}