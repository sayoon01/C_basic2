﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c;

	printf("Enter 문자열 (q이전까지 문자열로 인정함)\n");

	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);

		c = getchar();
	}
	while (getchar() != '\n');
	printf("\n--------------------------------\n");
	printf("Enter 두번째 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);

		c = getchar();
	}
	putchar('\n');
}