#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // 계산 수행에 사용할 전역 변수

int main(void)
{
	srand(200);
	generateData();
	printf("발생된 10개의 난수 : \n");
	printData();
	printf("10개 난수의 합 = %d \n", totalData());
	printf("10개 난수 중 가장 큰 수 = %d \n", maxData());
}
void generateData()
{
	int* p;
	p = data; // p = &data[0];
	for (int k = 0; k < 10; k++)
		*p++ = rand() % 100;
	return;
}
void printData()
{
	int* p = data;
	for (int k = 0; k < 10; k++)
		printf("%d ", *p++);
	printf("\n");
	return;
}
int totalData() 
{
	int sum = 0;
	int* p = data;
	for (int k = 0; k < 10; k++)
		sum += *p++;
	return sum;
}
int maxData()
{
	int* p = data;
	int max = *p++;

	for (int k = 1; k < 10; k++)
	{
		if (max < *p) // if( max < *p++ ) <-- 이렇게 풀면 안돼!!!!
			max = *p;
		p++;
	}
	return max;
}