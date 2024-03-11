// 윤상아 20200990 컴퓨터학과
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void printMinMax(int arr[], int size)
{
	// 최소값, 최대값을 찾아서 인덱스와 함께 출력하도록 정의하라
	int i;
	int min = INT_MAX, max = INT_MIN;
	int minIndex = -1, maxIndex = -1;

	for (i = 0; i < size; i++) {
		if (max < arr[i]){
			max = arr[i];
			maxIndex = i;
		}

		if (min > arr[i]){
			min = arr[i];
			minIndex = i;
		}
	}
	
	//max = arr[0];
	//for(i=1;i<size;i++)
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//		maxIndex = i;
	//	}

	//min = arr[0];
	//for (i = 1; i < size; i++)
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//		minIndex = i;
	//	}

	//max = min = arr[0];
	//for (i = 1; i < size; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//		maxIndex = i;
	//	}
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//		minIndex = i;
	//	}
	//}

	printf("최대값 : 인덱스 = %d , 값 = %d\n", maxIndex, max);
	printf("최소값 : 인덱스 = %d , 값 = %d\n", minIndex, min);
}
int main(void) // 변경하지 말라
{
	int a[10];
	//srand(time(NULL));
	srand(100); // 실행결과가 맞나 보기 위해서 seed를 100으로 고정
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);
	return 0;
}