#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern float sum_2(float a, float b); //원형
float g_i = 10.0;
int main(void)
{
	printf("계산결과는 %f.\n", sum_2(10, 20));
	return 0;
}