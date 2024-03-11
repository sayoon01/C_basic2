#define MAX_SET_SIZE 10 
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int hasElement(int set[], int size, int element);
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]);
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]);
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]);
void printSet(int set[], int size);

int main(void)
{
	int i;
	int setA[MAX_SET_SIZE];
	int setB[MAX_SET_SIZE];
	int setC[MAX_SET_SIZE * 2];
	int sizeA;
	int sizeB;
	int sizeC;

	printf("Enter the size of Set A:");
	scanf("%d", &sizeA);
	i = 0;
	while (i < sizeA)
	{
		printf("Enter the number for Set A (%d/%d):", i + 1, sizeA);
		scanf("%d", &setA[i]);
		i = addOneElement(setA, i, setA[i]);
	}
	printf("Enter the size of Set B:");
	scanf("%d", &sizeB);
	i = 0;
	while (i < sizeB)
	{
		printf("Enter the number for Set B (%d/%d):", i + 1, sizeB);
		scanf("%d", &setB[i]);
		i = addOneElement(setB, i, setB[i]);
	}

	printf("Set A: ");
	printSet(setA, sizeA);
	printf("Set B: ");
	printSet(setB, sizeB);

	sizeC = setUnion(setA, sizeA, setB, sizeB, setC); // Union, setC is the result set
	printf("Union of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setIntersecton(setA, sizeA, setB, sizeB, setC); //Intersection, setC is the result set
	printf("Intersection of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setComplements(setA, sizeA, setB, sizeB, setC); //Complements, setC is the result set
	printf("Set-theoretic difference of setA and setB (setA - setB): ");
	printSet(setC, sizeC);
}
int addOneElement(int set[], int size, int element);
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

int setUnion(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i;
	int size;

	for (i = 0; i < size1; i++) //일단 set1을 setResult에 복사
		setResult[i] = set1[i];
	size = size1;

	for (i = 0; i < size2; i++)
		size = addOneElement(set1, size1, set2[i]);

	return size;
}
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int size = 0;
	int i;

	for (i = 0; i < size2; i++)
		if (hasElement(set1, size1, set2[i]))
			setResult[size++] = set2[i];
	return size;
}
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int size = 0;
	int i;
	for (i = 0; i < size1; i++)
		if (!hasElement(set2, size2, set1[i]))
			setResult[size++] = set1[i];
	return size;
}