#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, num;
	int data[100];
	int count[10] = { 0,0,0,0,0,0,0,0,0,0 };

	//srand(time(NULL))

	printf("Enter the number of random numbers : (<=100) ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) // 난수 배열 생성
		data[i] = rand() % 10;

	//for (i = 0; i < num; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//		if (data[i] == j)
	//			count[j]++;
	//}

	for (i = 0; i < num; i++)
		count[data[i]]++;
	
	for (i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);

	printf("------------------------------------------------\n");
	printf("발생된 난수는\n");
	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
}