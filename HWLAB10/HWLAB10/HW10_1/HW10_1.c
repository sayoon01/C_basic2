#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};
int main(void)
{
	struct student s[3];

	for (int i = 0; i < 3; i++)
	{
		printf("Enter a student name : ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score : ");
		scanf("%d %d", &s[i].midterm, &s[i].final);

		s[i].average = (s[i].midterm + s[i].final) / 2;
	}

	printf("이름   중간   학기말  평균\n");
	for (int i = 0; i < 3; i++)
		printf("%s %d  %d  %d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);

	for (int i = 0; i < 3; i++)
	{
		if (s[i].average >= 80)
			s[i].grade = 'A';
		else if (s[i].average >= 50)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';
	}

	printf("이름  학점\n");
	for (int i = 0; i < 3; i++)
		printf("%s %c\n", s[i].name, s[i].grade);

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		sum1 += s[i].midterm;
		sum2 += s[i].final;
	}
	printf("\n중간고사의 평균 = %d\n", sum1 / 3);
	printf("학기말고사의 평균 = %d\n", sum2 / 3);
}
	