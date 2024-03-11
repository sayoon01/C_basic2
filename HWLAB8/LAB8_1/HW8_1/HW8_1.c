#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int* p, int size);
void printData(int* p, int size);
int maxData(int* p, int size);
void main()
{
	int k;
	int* p;
	int sum;

	int data[10];

	p = data; // p = &data[0];
	srand(time(NULL));

	for (k = 0; k < 10; k++)
		*p++ = rand() % 100;

	sum = sumUpData(data, 10);
	printf("엘리먼트의 합은 %d\n", sum);

	printf("엘리먼트들은 ");
	printData(data, 10);

	printf("\n엘리먼트들 중 가장 큰 수는 %d\n", maxData(data, 10));
}
int sumUpData(int* p, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *p++;
	return sum;
}
void printData(int* p, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", *p++);
}
int maxData(int* p, int size)
{
	int max = *p;
	for (int i = 1; i < size; i++)

	{
		if (max < *p)
			max = *p;
		p++;
	}
	return max;
}