#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int inputAge;
	char inputName[20];
	printf("나이 입력: ");
	scanf_s("%d", &inputAge);
	printf("이름 입력: ");
	scanf_s("%s", inputName, sizeof(inputName));

	printf("%s님 %d세 입니다.", inputName, inputAge);

	return 0;
}
// A && B - A와 B 참 거짓 판별
// A & B - A와 B의 비트 연산