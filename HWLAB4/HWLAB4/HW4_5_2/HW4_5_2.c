#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n);
int main(void)
{
	int n;
	scanf("%d", &n);

	printf("\n%d\n", get_cycle_number(n));
}
int get_cycle_number(int n)
{
	printf("%d ", n);
	if (n == 1)
		return 1;
	else
	{
		if (n % 2 == 0)
			return get_cycle_number(n / 2) + 1;
		else
			return get_cycle_number(n * 3 + 1) + 1;
	}
}
//int get_cycle_number(int n)
//{
//	printf("%d ", n);
//	if (n == 1)
//		return 1;
//	else {
//		if (n % 2 == 0)
//			n /= 2;
//		else
//			n = n * 3 + 1;
//		return get_cycle_number(n) + 1; //홀수던 짝수던 공통수행 !!
//	}
//}

