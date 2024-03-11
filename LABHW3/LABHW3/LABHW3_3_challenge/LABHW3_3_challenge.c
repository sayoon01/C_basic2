// 컴퓨터학과 윤상아 20200990
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int askReservation();
void processReservation(int s[], int size, int seatNumber);
void printSeats(int s[], int size);
int main(void)
{
	int i;
	int seatChoice;
	int seats[SIZE] = { 0 };

	printf("******좌석 예약 시스템******\n");

	printSeats(seats, SIZE);

	//while (total < 10)
	//{
	//	total += askReservation();

	//	if (total > 10) {
	//		printf(">>> %d명은 예약 안됨\n", total - 10);
	//		total = 10;
	//	}
	//	processReservation(seats, SIZE, total);

	//	//while (getchar() != '\n'); // 버퍼 비움
	//}
	for (i = 0; i < SIZE; i += seatChoice)
	{
		seatChoice = askReservation();
		if (i+seatChoice > 10) {
			printf(">>> %d명은 예약 안됨\n", i + seatChoice - 10);
			 = 10;
		}
		processReservation(seats, seatChoice, i);
		printSeats(seats, SIZE);
	}
}

int askReservation()
{
	int choice;

	printf("\n좌석을 예약하시겠습니까? (몇명) ");
	scanf("%d", &choice);

	return choice;
}

void processReservation(int s[], int size, int seatNumber)
{
	for (int i = 0; i < size; i++)
		s[i+seatNumber] = 1;
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