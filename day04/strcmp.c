///* strcmp - 문자열 비교 함수 */
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "apple";
//	char str2[100] = "orange";
//
//	/* str이 사전에서 먼저 나오면(유니코드값이 작으면) -1 반환, str2가 먼저 나오면(유니코드값이 작으면) 1반환, 같으면 0 반환 */
//	if (strcmp(str, str2) > 0) printf("%s\n", str);
//	else printf("%s\n", str2);
//
//	printf("a: %d\n", 'a');
//	printf("b: %d\n", 'b');
//
//	strcmp(str, str2, 3);
//
//	return 0;
//}
///*
//	전역변수 : 프로그램 전체
//	지역변수 : 블록안에서만 사용, 매개변수, 자동변수
//	정적변수 : 전역 + 지역
//*/