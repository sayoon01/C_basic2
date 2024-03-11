 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int amountTotal(int amount);
int main(void)
{
	int amount;

	printf("저금할 금액(-1 for exit) : ");
	scanf("%d", &amount);
	while (amount!=-1)
	{
		printf("현재까지의 입금액 : %d\n", amountTotal(amount));
		printf("저금할 금액(-1 for exit) : ");
		scanf("%d", &amount);
	}
	printf("입금 완료\n");
}

int amountTotal(int amount)
{
	static int sum = 0;
	sum += amount;
	return sum;
}