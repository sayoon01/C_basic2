#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;
	printf("합은 %d\n", sumList(list, 10));
	printf("가장 큰 수는 %d\n", maxList(list, 10));
	printf("탐색할 값은? ");
	scanf_s("%d", &value);
	// value 가 list 에 있는가를 판별하여 "없다" 혹은 "**째에 있다"를 출력
	
	keyIndex = indexSearch(list, 10, value);
	if (keyIndex == -1)
		printf("없다\n");
	else
		printf("값 %d을 갖는 첫번째  값은 %d번째에 있습니다\n", value, keyIndex + 1);
}

int sumList(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

int maxList(int arr[], int size)
{
	int i, max;
	max = -999;
	for (i = 0; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}

int indexSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
		if (arr[i] == key)
			return i;
	return -1;
}