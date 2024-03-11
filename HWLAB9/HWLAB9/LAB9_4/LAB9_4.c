#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char fullName[50];
	char lastName[50] = "Pak";
	char firstName[50] = "Suehee";

	char id[15] = "630826-2020222"; // 14개의 문자 + '\0'
	char idFront[7];

	// fullName에 성과 "," 그리고 이름을 넣는다
	//fgets(fullName, sizeof(fullName), stdin); // /n/0
	//gets(fullName); // /0
	strcpy(fullName, lastName);
	strcat(fullName, ", ");
	strcat(fullName, firstName);
	printf("당신의 fullName은 %s\n", fullName);

	strncpy(idFront, id, 6);
	idFront[6] = '\0';
	printf("주민등록번호 앞자리는 %s\n", idFront);
}