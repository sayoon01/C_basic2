#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("\n%d\n", get_cycle_number(n));
}
int get_cycle_number(int n)
{
	int count = 1;
	printf("%d ", n);
	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		printf("%d ", n);
		count++;
	}
	return count;
}