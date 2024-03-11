#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int data[81];
int dataSum(int n);
int main(void)
{
	int num;
	scanf("%d", &num);
	printf("\n%d", dataSum(num));
}

int dataSum(int n)
{
	int total = 0;
	if (n == 0)
		return 0;
	else
	{
		total = dataSum(n - 1) + n * 10 + 2;
		printf("%d ", n * 10 + 2);
	}
	
	/*if (n >= 1)
	{
		total = dataSum(n - 1) + n * 10 + 2;
		printf("%d ", n * 10 + 2);
	}
	else
		return 0;*/
	return total;
}