#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

void printSet(int a[], int index);
int checkDouble(int a[], int size, int element);
int main(void)
{
	int i;
	int element;
	int multiset[SIZE];

	i = 0;
	while (i < SIZE)
	{
		printf("집합에 추가할 원소 : ");
		scanf("%d", &element);

		if (checkDouble(multiset, i+1, element)==1) {   // i+1는 i<size하기 위함
			printf("%d는 이미 집합에 있음\n", element);
		}
		else {
			multiset[i] = element;
			printSet(multiset, i);
			i++;
		}
	}
}
int checkDouble(int a[], int size, int element)
{
	for (int i = 0; i < size; i++)
		if (a[i] == element)
			return 1; // 원소가 중복됌
	return 0;
}
void printSet(int a[], int index)
{
	printf("{ ");
	for (int i = 0; i < index; i++)
		printf("%d, ", a[i]);
	printf("%d }\n", a[index]);
}
//int main(void)
//{
//	int num;
//	int multiset[SIZE];
//	
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("집합에 추가할 원소 : ");
//		scanf("%d", &num);
//
//		if (i == 0 || checkDouble(multiset, i,num)) {
//			multiset[i] = num;
//			printSet(multiset, i);
//		}
//		else {
//			printf("%d는 이미 집합에 있음\n", num);
//			i--;
//		}
//	}
//}
//int checkDouble(int a[], int index,int element)
//{
//	for (int i = 0; i <= index; i++)
//		if (a[i] == element)
//			return 0; // 원소가 중복됌
//	return 1;
//}
//void printSet(int a[], int index)
//{
//	printf("{ ");
//	for (int i = 0; i < index; i++)
//		printf("%d, ", a[i]);
//	printf("%d }\n", a[index]);
//}