///* pointer - 주소 
//   포인터 변수 - 주소를 저장할 수 있는 변수
//*/
//#include <stdio.h>
//
//int main()
//{
//	//int p;		// int 타입의 변수 선언
//	//int* p;		// int 타입의 포인터 변수 선언
//	//char* pc;	// char 타입의 포인터 변수 선언
//	//double *pd;	// *위치는 상관없음
//
//	int num = 0;
//	printf("num의 주소: %p\n", &num);
//	printf("num의 값: %d\n", num);
//	int* p = &num;	// 선언부분에서 * 표시는 그냥 단순한 표시
//	printf("포인터 변수 p에 저장된 값: %p\t", p);
//	printf("포인터 변수 p가 가리키는 곳의 값: %d\n", *p);	// 간접 참조 연산자
//	num += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//	*p += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//	return 0;
//}