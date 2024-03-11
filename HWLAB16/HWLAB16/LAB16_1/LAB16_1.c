#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int table[5][3] = { 0 };
	int table1[5][3];
	int total = 0;

	printf("가)\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	total = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			table1[i][j] = i + j;
			total + table1[i][j];
		}
	}
	printf("나)\n");
	/*for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", table1[i][j]);
		printf("\n");
	}*/

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3) {
			printf("%d", table1[i][j]);
			j++
		}
		printf("\n");
		i++;
	}
	/*for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			total += table1[i][j];*/

	printf("다)\n");
	printf("Total is %d\n", total);
}