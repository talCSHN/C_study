///* 문자열 - 문자열 또한 배열명처럼 시작주소를 나타냄 */
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "orange";
//	printf("%s\n", str);
//
//	printf("%s\n", "orange");
//	printf("%p\n", "orange");
//	printf("%c\n", *"orange");
//	printf("%c\n", *("orange" + 1));
//	printf("%c\n", "orange"[2]);
//
//	//"orange"[0] = 'O';	// 문자열 상수 -> 변경 불가
//	printf("%s\n", str);
//	return 0;
//}
//
///*
//Data 메모리 영역
//	- heap : 사용자에게 할당된 메모리 영역
//	- stack : 지역변수, 매개변수
//	- data : 전역변수, static
//	- rod : 문자열 상수, 리터럴
//
//Code 메모리 영역 - 함수, 제어문
//*/