//#include <stdio.h>
//
///*
//	함수 포인터
//*/
//#include <stdio.h>
//int sum(int, int);
//int sub(int, int);
//void func(int(*)(int, int));
//
//int main()
//{
//	int (*fp)(int, int);
//	int res;
//	/*res = sum(20, 10);
//	res = sub(20, 10);*/
//	//fp = sum;
//	//res = fp(20, 10);
//	char methodName[100];
//	int a, b;
//	printf("input function name : ");
//	scanf_s("%s", methodName, 100);
//	printf("input numbers \n");
//	scanf_s("%d %d", &a, &b);
//	if (strcmp(methodName, "sum") == 0) {
//		fp = sum;
//		func(fp(a, b));
//	}
//	else if (strcmp(methodName, "sub") == 0) {
//		fp = sub;
//		func(fp(a, b));
//	}
//	else {
//		printf("invalid function name");
//	}
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
//
//void func(int(*fp)(int, int)) {
//
//}