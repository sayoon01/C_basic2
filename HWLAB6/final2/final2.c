#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_word_in_word(char s1[], int idx, char s2[])
{
	for (int i = 0; s2[i] != '\0'; i++)
		if (s1[idx + i] != s2[i])
			return 0;
	return 1;
}
int main(void) // main 은 변경하지 말고 사용한다. 변경시 감점
{
	char s1[20], s2[20];
	int i, j;
	scanf("%s", s1);
	scanf("%s", s2);
	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
}