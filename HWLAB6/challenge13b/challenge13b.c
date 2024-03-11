#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, sum = 0;
	char word[81];

	printf("Enter a word : ");
	scanf("%s", word);
	

	for (int i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9'){
			num *= 10;
			num += (word[i] - '0');
		} 
		else {
			sum += num;
			num = 0;
		}
	}
	sum += num;
	printf("글자 안의 수의 합은 %d\n", sum);
}