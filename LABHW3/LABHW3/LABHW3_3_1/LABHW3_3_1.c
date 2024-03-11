﻿// 컴퓨터학과 윤상아 20200990
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

char askReservation();
void processReservation(int s[], int size, int seatNumber);
void printSeats(int s[], int size);
int main(void)
{
	int seatChoice;
	int seats[SIZE] = { 0 };

	printf("******좌석 예약 시스템******\n");

	while (askReservation() == 'y')
	{
		printSeats(seats, SIZE);

		printf("몇번째 좌석 ? ");
		scanf_s("%d", &seatChoice);

		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n'); // 버퍼 비움
	}
}

char askReservation()
{
	char choice;

	printf("\n좌석을 예약하시겠습니까?(y/n) ");
	scanf("%c", &choice);

	return choice;
}

void processReservation(int s[], int size, int seatNumber)
{
	if (s[seatNumber - 1] == 0) {
		s[seatNumber - 1] = 1;
		printf("예약되었습니다\n");

		printSeats(s, size);
	}
	else
		printf("이미 예약된 자리입니다\n");
}

void printSeats(int s[], int size)
{
	printf("-----------------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("-----------------------------\n");
	for (int i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}