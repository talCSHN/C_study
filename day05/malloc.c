///*
//	메모리 동적 할당: malloc - free
//	calloc - 메모리 동적 할당하여 0으로 초기화
//	realloc - 크기 조절
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi = (void*)malloc(sizeof(int));	// heap영역에 입력크기만큼 메모리 공간을 할당받아서 시작 주소를 return한다
//	if (pi == NULL) {
//		printf("메모리 할당 실패");
//		exit(1);
//	}
//	printf("할당 성공");
//
//	free(pi);
//	return 0;
//}