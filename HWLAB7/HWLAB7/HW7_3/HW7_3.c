#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_array(int pa[][3], int size) // sum_array(int (* pa)[3], int size)와 같음
{
	int i, j, sum = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			sum += pa[i][j];
	return sum;
}
int main(void)
{
	int arr[][3] = {1,22,70,23,80,34,90,20,4,40,99,30};

	printf("arr의 합은 %d\n", sum_array(arr, 4));
}