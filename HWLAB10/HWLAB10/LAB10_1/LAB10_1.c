#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct customer {
	char name[40];
	int age;
};
int main(void)
{
	struct customer aCustomer = { "박수희",36 };
	printf("%s %d\n", aCustomer.name, aCustomer.age);

	struct customer cArray[2] = { {"장동건",38},{"고소영",38} };
	for (int i = 0; i < 2; i++)
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
}