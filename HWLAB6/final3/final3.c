#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mergeString(char c[], char a[], char b[])
//{
//	int i, j;
//	int min, size;
//	char tmp;
//
//	size = 0;
//	for (i = 0; a[i] != '\0'; i++)
//		c[size++] = a[i];
//	for (i = 0; b[i] != '\0'; i++)
//		c[size++] = b[i];
//	c[size] = '\0';
//
//	for (i = 0; i < size - 1; i++)
//	{
//		min = i;
//		for (j = i + 1; j < size; i++)
//			if (c[j] < c[min])
//				min = j;
//
//		tmp = c[min];
//		c[min] = c[i];
//		c[i] = tmp;
//	}
//
//	return;
//} // 1차 시도
{
	int i = 0, j = 0, size = 0;
	while (a[i] != '\0' && b[j] != '\0') {
		if (a[i] < b[j])
			c[size++] = a[i++];
		else
			c[size++] = b[j++];
	}


	while (b[j] != '\0')
		c[size++] = b[j++];
	while (a[i] != '\0')
		c[size++] = a[i++];
	c[size] = '\0';
	return;
}
int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];
	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}