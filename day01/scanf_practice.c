#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char inputName[20];
	printf("�̸� �Է�: ");
	scanf("%s", &inputName);
	int inputNum;
	printf("���� �Է�: ");
	scanf("%d", &inputNum);
	printf("%s, %d�� �Դϴ�.", inputName, inputNum);
	return 0;
}