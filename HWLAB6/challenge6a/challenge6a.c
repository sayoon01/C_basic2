#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sizeOfWord(char w[]);
int main(void)
{
	int flag = 1;
	char w1[81], w2[81];

	printf("Enter the first word : ");
	scanf("%s", w1);
	printf("Enter the second word : ");
	scanf("%s", w2);

	if (sizeOfWord(w1) != sizeOfWord(w2))
		flag = 0;
	else
		for (int i = 0; w1[i] != '\0'; i++)
			if (w1[i] != w2[i]) {
				flag = 0;

	/*for (int i = 0; (w1[i] != '\0' || w2[i] != '\0'); i++)
		if (w1[i] != w2[i])
			flag = 0;*/

	if (flag == 0)
		printf("두 단어는 다르다.\n");
	else
		printf("두 단어는 같다.\n");
}

int sizeOfWord(char w[])
{
	int len;
	for (len = 0; w[len] != '\0'; len++);
	return len;
}