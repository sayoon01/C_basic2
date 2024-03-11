#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char id[20];
	char *idFront, *idBack;
	char birthYear[10];

	printf("주민등록번호 입력 ('-' 포함) : ");
	fgets(id, sizeof(id), stdin);

	idFront = strtok(id, "-");
	idBack = strtok(NULL, "\0");
	
	strcpy(birthYear, 19);
	strncat(birthYear, idFront, 2);

	printf("당신은 %s년도 생이군요\n", birthYear);
	if (idBack[0] == '1')
	{
		printf("남자분이시군요.\n");
		printf("평균 수명 %d를 더하면 %d까지 산다고 계산됩니다.\n", 77, atoi(birthYear) + 77);
	}
	else
	{
		printf("여자분이시군요.\n");
		printf("평균 수명 %d를 더하면 %d까지 산다고 계산됩니다.\n", 84, atoi(birthYear) + 84);
	}
	return 0;
}