#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* str[5];
	//char* ps;
	printf("문자열을 입력하세요\n");
	char inputStr[100];
	for (int i = 0; i < 5; i++) {
		scanf_s("%s", inputStr, 100);
		str[i] = (char*)(malloc(strlen(inputStr) + 1));;
		if (str[i] == NULL) {
			exit(1);
		}
		strcpy(str[i], inputStr);
	}
	printf("str : ");
	for (int i = 0; i < 5; i++) {
		printf("%s ", str[i]);
	}
	////gets(str);

	//ps = (char*)(malloc(strlen(str[0]) + 1));	// 입력된 문자열을 저장할 공간을 heap으로부터 할당 받음
	//if (ps == NULL) {
	//	exit(1);
	//}
	//printf("입력한 문자열: %s\n", ps);
	//strcpy(ps, str);	// 문자열 복사
	//printf("heap 영역 문자열: %s\n", ps);	// 동적 메모리 반환
	for (int i = 0; i < 5; i++) {
		free(str[i]);
	}
	return 0;
}