///* 배열과 포인터 */
//#include <stdio.h>
//
//int main()
//{
//	int arr[5];
//	int* pa = arr;
//
//	*(pa + 0) = 10;
//	printf("*pa: %d, arr[0]: %d\n", *pa, arr[0]);
//	printf("pa: %d\n", (pa + 0));
//	printf("pa + 1: %d\n", (pa + 1));
//	*(pa + 1) = 20;
//	printf("*(pa + 1): %d, arr[1]: %d\n", *(pa + 1), arr[1]);
//	printf("pa[1]: %d\n", pa[1]);	// [ ] == *( ):포인터연산식
//
//	return 0;
//}