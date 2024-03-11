#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char id[15];
	char *idFront, *idBack;
	char* sex;

	printf("주민등록번호 입력 ('-' 포함) : ");
	gets(id);

	idFront = strtok(id, "-");
	idBack = strtok(NULL, "\0");

	printf("당신은 %s년도 생이군요\n", strncat("19", idFront, 2));

}