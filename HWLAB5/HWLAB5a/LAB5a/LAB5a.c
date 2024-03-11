#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int a[][4], int size);
void printArray(int a[][4], int size);
void rotateArray(int a1[][4], int a2[][4], int size);
int main(void)
{
	int arr1[4][4], arr2[4][4];

	initArray(arr1, 4); // 이때 4는 행의 개수이다. 행의 개수는 바뀔 수 있지만, 
	                   //열의 개수는 고정되어있다
	printArray(arr1, 4);
	printf("\n");
	rotateArray(arr1, arr2, 4);
	printArray(arr2, 4);

}

void initArray(int a[][4], int size)// [][4] <-열이 고정, size는 행의 개수(가변)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = i * 4 + j + 1;
}

void printArray(int a[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void rotateArray(int a1[][4], int a2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a2[i][j] = a1[3 - j][i];
}