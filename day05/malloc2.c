//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str[100];	// stack 메모리에 생성
//	char* ps;
//	printf("문자열을 입력하세요 >> ");
//	gets(str);
//	printf("입력한 문자열: %s\n", str);
//
//	ps = (char*)(malloc(strlen(str) + 1));	// 입력된 문자열을 저장할 공간을 heap으로부터 할당 받음
//	if (ps == NULL) {
//		exit(1);
//	}
//	//printf("입력한 문자열: %s\n", ps);
//	strcpy(ps, str);	// 문자열 복사
//	printf("heap 영역 문자열: %s\n", ps);	// 동적 메모리 반환
//
//	free(ps);
//	return 0;
//}