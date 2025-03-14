///*
//	static
//*/
//#include <stdio.h>
//void incFunc();
//void incFunc2();
//
//int main()
//{
//	for (int i = 0; i < 5; i++) {
//		incFunc();
//		incFunc2();
//	}
//	//cnt2++; // 외부에서 정적변수 접근 불가
//	return 0;
//}
//
//void incFunc() {
//	int cnt = 0;
//	cnt++;
//	printf("cnt: %d\t", cnt);
//}
//
//void incFunc2() {
//	static int cnt2 = 0;	// 정적 지역변수(정적변수 수정은 선언된 블록안에서만 가능)
//	cnt2++;
//	printf("cnt2: %d\n", cnt2);
//
//}
//
////int arr[열] = { 1, 2, 3 };
////int arr[행][열];