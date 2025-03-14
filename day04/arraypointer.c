///*
//	배열포인터 : 배열을 가리키는 포인터
//*/
//#include <stdio.h>
//
//int main()
//{
//	/*int a = 10;
//	int* pa = &a;
//
//	int arr[] = { 1, 2, 3 };
//	int(* parr) = arr;
//	printf("%d", *parr);*/
//
//	//int(* parr)[4];	// int형 변수 4개의 배열 가리키는 배열포인터
//	//int* parr[4];	// 포인터배열
//	
//	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
//	//int** parr = arr;
//	int(*parr)[4];
//	parr = arr;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf(" %d", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}