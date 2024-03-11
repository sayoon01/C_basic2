#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

to_binary(int n);
int main(void)
{
	int num;
	scanf("%d", &num);
	to_binary(num);
}
to_binary(int n)
{
	if (n > 0)
	{
		to_binary(n / 2);
		printf("%d ", n % 2);
	}
}