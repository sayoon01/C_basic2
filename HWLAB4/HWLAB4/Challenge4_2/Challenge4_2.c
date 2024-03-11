#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int god(int x, int y);
int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);

	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}

	printf("%d와 %d의 최대공약수는 %d\n", big, small, god(big, small));
}
int god(int x, int y)
{
	if (y == 0)
		return x;
	else
		return god(y, x % y);
}
//int god(int x, int y)
//{
//	int tmp;
//
//	if (y == 0)
//		return x;
//	else
//	{
//		tmp = x;
//		x = y;
//		y = tmp % y;
//		return god(x, y);
//	}
//
//}