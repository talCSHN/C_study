///* 
//	����������
//*/
//#include <stdio.h>
//
//int main()
//{
//	int n = 100;
//	int* pn;	//= &n;
//	int** ppn;	// ����������
//
//	pn = &n;	// ���� n�� �ּ� ����
//	ppn = &pn;	// �����ͺ��� pn�� �ּ� ����
//
//	printf("n: %d\t, n�� �ּ�: %p\n", n, &n);
//	printf("n�� ��: %d\t, pn: %p\t, pn�� �ּ�: %p\n", *pn, pn, &pn);
//	printf("n�� ��: %d\t, pn�� ��: %p\t, ppn: %p\t, ppn�� �ּ�: %p\n", **ppn, *ppn, ppn, &ppn);
//	return 0;
//}