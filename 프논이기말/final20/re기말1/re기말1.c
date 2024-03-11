#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changeToDigitEncode(char s[], char e[]);
int main(void)
{
	char sentence[20], encoded[40];

	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);
}
//void changeToDigitEncode(char s[], char e[])
//{
//	int i, j = 0;
//	for (i = 0; s[i] != '\0'; i++) {
//		if (s[i] >= 'A' && s[i] <= 'I')
//			e[j++] = s[i] - 16;
//		else if (s[i] <= 'S'){
//			e[j++] = '1';
//			e[j++] = s[i] - 26;
//		}
//		else if (s[i] <= 'Z') {
//			e[j++] = '2';
//			e[j++] = s[i] - 36;
//		}
//	}
//	e[j] = '\0';
//}

void changeToDigitEncode(char s[], char e[])
{
	int i, j = 0;
	int score;

	for (i = 0; s[i] != '\0'; i++)
	{
		score = s[i] - 64;
		if (score > 10) {
			e[j++] = score / 10 + '0';
			e[j++] = score % 10 + '0';
		}
		else
			e[j++] = score + '0';
	}
	e[j] = '\0';
}