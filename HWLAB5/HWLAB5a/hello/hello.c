#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int sortScore[], int size);
int main(void)
{
	int i, idx3;
	char name[50][50];
	int score[50], sortScore[50];
	int n;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", name[i]);
		while (getchar() != '\n');
		scanf("%d", score[i]);
		sortScore[i] = score[i];
	}

	sort(sortScore, n);
	for (i = 0; i < n; i++)
		if (score[i] == sortScore[2])
			printf("%s", name[i]);
}

void sort(int s[], int size)
{
	int i, j;
	int tmp;
	int maxIndex;

	for (i = 0; i < size - 1; i++)
	{
		maxIndex = i;
		for (j = i + 1; j < size; j++)
			if (s[j] > s[maxIndex])
				maxIndex = j;
		tmp = s[i];
		s[i] = s[maxIndex];
		s[max]Index] = tmp;
	}
}
