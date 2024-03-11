#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSet(int[], int);
int main(void)
{
	int multiset[5];

	for (int i = 0; i < 5; i++)
	{
		printf("다중집합에 추가할 원소 : ");
		scanf("%d", &multiset[i]);
		printSet(multiset, i+1);
	}
}
void printSet(int a[], int size)
{
	printf("{ ");
	for (int i = 0; i < size-1; i++)
		printf("%d, ", a[i]);
	printf("%d }\n", a[size-1]);
}