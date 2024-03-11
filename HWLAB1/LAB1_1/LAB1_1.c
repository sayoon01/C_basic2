#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[5];
	int i;
	int total = 0, average;

	for (i = 0; i < 5; i++)
	{
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &num[i]);
		total += num[i];
	}
	printf("----------------------------------\n");
	average = total / 5;
	printf("총합은 %d\n", total);
	printf("평균은 %d\n", average);
	printf("----------------------------------\n");
	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

}