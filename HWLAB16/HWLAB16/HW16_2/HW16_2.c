﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr2[4][2];
	int arr3[8];
	int i, j;

	for (i = 0; i < 4; i++) 
		for (j = 0; j < 2; j++)
			arr2[i][j] = arr1[j][i];
	
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr3[4 * i + j] = arr1[i][j];

	printf("\n--배열 A\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			printf("%5d", arr1[i][j]);
		printf("\n");
	}
	printf("\n--배열 B\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++)
			printf("%5d", arr2[i][j]);
		printf("\n");
	}
	printf("\n--배열 C\n");
	for (i = 0; i < 8; i++)
		printf("%5d", arr3[i]);
	printf("\n");
}