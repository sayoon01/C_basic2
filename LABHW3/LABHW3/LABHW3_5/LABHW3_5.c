#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int a[], int size);
void selectionSort(int a[], int size);
int main(void)
{
	int arr[10];

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 100;

	printf("발생된 난수 :\t");
	printArray(arr, 10);
	selectionSort(arr, 10);
	printf("정렬 후 : \t");
	printArray(arr, 10);
}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void selectionSort(int a[], int size)
{
	int temp, minIndex;
	int i, j;

	for (i = 0; i < size - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < size; j++) 
			if (a[j] < a[minIndex])
				minIndex = j;

		temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}
}