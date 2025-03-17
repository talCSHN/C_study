///*
//	함수 포인터
//*/
//#include <stdio.h>
//int sum(int, int);
//int sub(int, int);
//int main()
//{
//	int (*fp)(int, int);
//	int res;
//	/*res = sum(20, 10);
//	res = sub(20, 10);*/
//	fp = sum;
//	res = fp(20, 10);
//	//printf("%d", res);
//	return 0;
//}
//
//int sum(int a, int b) {
//	int res = a + b;
//	printf("sum result : %d\n", res);
//	return res;
//}
//
//int sub(int a, int b) {
//	int res = a - b;
//	printf("sub result : %d\n", res);
//	return res;
//}