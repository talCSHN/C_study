///* 
//	이중포인터
//*/
//#include <stdio.h>
//
//int main()
//{
//	int n = 100;
//	int* pn;	//= &n;
//	int** ppn;	// 이중포인터
//
//	pn = &n;	// 변수 n의 주소 저장
//	ppn = &pn;	// 포인터변수 pn의 주소 저장
//
//	printf("n: %d\t, n의 주소: %p\n", n, &n);
//	printf("n의 값: %d\t, pn: %p\t, pn의 주소: %p\n", *pn, pn, &pn);
//	printf("n의 값: %d\t, pn의 값: %p\t, ppn: %p\t, ppn의 주소: %p\n", **ppn, *ppn, ppn, &ppn);
//	return 0;
//}