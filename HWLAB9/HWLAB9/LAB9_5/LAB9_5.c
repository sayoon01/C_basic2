﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[50];
	int i;
	char* name, * age;

	printf("이름(공백없이 알파벳들로 구성)과 나이를 입력하라 (예: Abba 50) : ");
	gets(str);

	puts("입력한 정보 : ");
	puts(str);

	name = strtok(str, " ");
	age = strtok(NULL, "\0");

	printf("이름은 %s이고 한국 나이는 %s입니다.\n", name, age);
	printf("10년 후에는 %d살입니다\n", atoi(age) + 10);
}
