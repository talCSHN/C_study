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
//	//cnt2++; // �ܺο��� �������� ���� �Ұ�
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
//	static int cnt2 = 0;	// ���� ��������(�������� ������ ����� ��Ͼȿ����� ����)
//	cnt2++;
//	printf("cnt2: %d\n", cnt2);
//
//}
//
////int arr[��] = { 1, 2, 3 };
////int arr[��][��];