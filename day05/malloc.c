///*
//	�޸� ���� �Ҵ�: malloc - free
//	calloc - �޸� ���� �Ҵ��Ͽ� 0���� �ʱ�ȭ
//	realloc - ũ�� ����
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi = (void*)malloc(sizeof(int));	// heap������ �Է�ũ�⸸ŭ �޸� ������ �Ҵ�޾Ƽ� ���� �ּҸ� return�Ѵ�
//	if (pi == NULL) {
//		printf("�޸� �Ҵ� ����");
//		exit(1);
//	}
//	printf("�Ҵ� ����");
//
//	free(pi);
//	return 0;
//}