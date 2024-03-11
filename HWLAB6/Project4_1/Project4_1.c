#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define NUM_OF_MEMBERS 15
// 함수 원형
void print_links(int data[][NUM_OF_MEMBERS]); //2차원 배열 출력
void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS]);
//2차원 배열 논리곱 data X data  result
int main(void)
{
	// 0과 1, 1과 2, 2와 4, 3과 4가 각각 1촌임을 보이도록 배열을 초기화하라.
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	// 2촌 관계를 넣을 배열을 0으로 초기화한다.
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };

	int i = 0;
	int j = 0;
	int num_of_steps = 0;
	int ALL_ONES = 0;

	srand(100);
	//srand((unsigned int)time(NULL));

	for (i = 0; i < NUM_OF_MEMBERS; i++)
	{
		link_data[i][i] = 1; // i와i의 관계는 1촌 즉 1로 표시
	}

	//link data 값 넣기 : rnadom하게 수를 발생시켜서 1촌 친구를 설정한다.
	for (i = 0; i < NUM_OF_MEMBERS; i++) //각 user마다 대략 4명의 친구가 있다고 가정.
	{
		j = 0;
		while (j < 2)
		{
			int new_link = rand() % NUM_OF_MEMBERS;
			if (new_link != i)
			{
				link_data[i][new_link] = 1;
				link_data[new_link][i] = 1;
				j++;
			}

		}
	}
	printf("=================================================================\n");
	printf("Friends matrix\n");
	printf("=================================================================\n");
	print_links(link_data); // 최초 1촌 관계 출력
	matrix_multiplication(link_data, link_result); // 2촌 관계를 link_result에 넣는다
	printf("=================================================================\n");
	printf("Friends of friends matrix\n");
	printf("=================================================================\n");
	print_links(link_result); // 2촌까지의 관계 출력
}
void print_links(int data[][NUM_OF_MEMBERS])
{
	for (int i = 0; i < NUM_OF_MEMBERS; i++) {
		for (int j = 0; j < NUM_OF_MEMBERS; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
}
void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS])
{
	for (int i = 0; i < NUM_OF_MEMBERS; i++)
		for (int j = 0; j < NUM_OF_MEMBERS; j++)
			for (int k = 0; k < NUM_OF_MEMBERS; k++)
				if (data[i][k] * data[k][j]==1) {
					result[i][j] = 1;
					break;
				}
	return;
}