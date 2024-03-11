#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct student {
//	char name[50];
//	int midterm;
//	int final;
//};
//int main(void)
//{
//	struct student aStudent;
//
//	printf("Enter student name : ");
//	scanf("%s", aStudent.name);
//	printf("Enter midterm and final score : ");
//	scanf("%d %d", &aStudent.midterm, &aStudent.final);
//
//	printf("\n이름   중간  학기말\n");
//	printf("%s %d   %d\n", aStudent.name, aStudent.midterm, aStudent.final);
//}
struct student {
	char name[50];
	int midterm;
	int final;
};
int main(void)
{
	struct student s[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Enter student name : ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score : ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
	}

	printf("\n이름   중간  학기말\n");
	for (i = 0; i < 3; i++)
		printf("%s %d    %d\n", s[i].name, s[i].midterm, s[i].final);
}