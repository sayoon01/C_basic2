#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n);
int main(void)
{
	int n, idx;

	printf("몇개의 피보나치 수열값을 출력할까요? (3보다 큰 정수) : ");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}
int fibo(int n)
{
	/*int a = 1, b = 0, c;

	for (int i = 0; i < n + 1; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;*/

	int i;
	int first = 1, second = 1;
	int result = 0;

	if (n == 0 || n == 1)
		return 1;
	else
		for (i = 2; i < n; i++) {
			result = first + second;
			first = second;
			second = result;
		}
}