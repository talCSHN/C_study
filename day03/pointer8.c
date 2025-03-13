///* const(상수) */
//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	// num = 20;	// 값 변경 불가
//
//	int num2 = 10;
//	num2 = 20;
//	int* pnum2 = &num2;
//	*pnum2 = 30;
//	printf("%d\n", num2);
//
//	const int* pn2 = &num2;	// 데이터 상수(포인터변수를 통한 데이터 변경 불허)
//	//*pn2 = 100;	// 간접참조로는 값 변경 불가
//	num2 = 0;
//	pn2 = &num;	// 주소값 변경 가능
//
//	int num3 = 40;
//	int* const pnum3 = &num3;	// 포인터 상수(포인터변수가 가리키는 주소값 변경 불허)
//	*pnum3 = 100;		// 간접참조로 값 변경 가능
//	printf("%d\n", num3);
//	//pnum3 = &num2;	// 주소값 변경 불가
//
//	const int* const pnum5 = &num2;
//	//*pnum5 = 100;		// 간접참조로 값 변경 불가
//	//pnum5 = &num3;	// 주소값 변경 불가
//	num2 = 40;	// 이건 가능
//
//	return 0;
//}