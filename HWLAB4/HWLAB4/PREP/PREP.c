#define MAX_SET_SIZE 10 
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//set에 element가 있으면 1 없으면 0을 반환한다.
int hasElement(int set[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++) 
		if (set[i] == element)
			return HAVE_ELEMENT;
	return DO_NOT_HAVE_ELEMENT;
}

void printSet(int set[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		printf("%d", set[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf(" }\n");
}
//void printSet(int set[], int size)
//{
//	int i;
//	printf("< ");
//	for (i = 0; i < size - 1; i++)
//		printf("%d, ", set[i]);  //공집합은 출력 안됌 !
//	printf("%d >\n", set[i]); // 마지막은 괄호 닫고 !
//}

/*set1과 set2가 같으면 1을 다르면 0을 반환*/
int isSetEqual(int set1[], int size1, int set2[], int size2)
{
	int i, j;
	if (size1 != size2)
		return 0;
	else
		for (i = 0; i < size1; i++) 
			if (!hasElement(set2, size2, set1[i])) // set1[i]가 set2안에 없으면
				return 0;
	return 1;
}
//int isSetEqual(int set1[], int size1, int set2[], int size2)
//{
//	int i, j;
//	int same = 0; // 같은 원소 개수
//	if (size1 != size2)
//		return 0;
//
//	for (i = 0; i < size1; i++)
//		for (j = 0; j < size2; j++)
//			if (set1[i] == set2[j])
//				same++;	
//		
//	if (same == size1)
//		return 1;
//	else
//		return 0;
//}


//원소가 집합에 존재하지않으면 추가, 이미 존재하면 redundant라고 출력하고 현재 집합 크기를 반환
int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element))
		printf("It is redundant. Please retry\n");
		//return size;
	else 
		set[size++] = element;
		//return size + 1;
	return size;
}
int main(void)
{
	int setA[MAX_SET_SIZE] = { 1,2,3 };
	int setB[MAX_SET_SIZE] = { 3,2,1,4 };
	int num;
	int sizeA = 3, sizeB = 4;

	printf("A:");
	printSet(setA, sizeA);
	printf("B:");
	printSet(setB, sizeB);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집합 A와 B는 같다\n");
	else
		printf("집합 A와 B는 다르다\n\n");

	printf("A에 3을 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 3); // 3을 setA에 추가한다
	printf("집합 A:");
	printSet(setA, sizeA);

	printf("A에 4을 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 4); // 4를 setA에 추가한다
	printf("집합 A:");
	printSet(setA, sizeA);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집합 A와 B는 같다\n");
	else
		printf("집합 A와 B는 다르다\n");
}