//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str[100];	// stack �޸𸮿� ����
//	char* ps;
//	printf("���ڿ��� �Է��ϼ��� >> ");
//	gets(str);
//	printf("�Է��� ���ڿ�: %s\n", str);
//
//	ps = (char*)(malloc(strlen(str) + 1));	// �Էµ� ���ڿ��� ������ ������ heap���κ��� �Ҵ� ����
//	if (ps == NULL) {
//		exit(1);
//	}
//	//printf("�Է��� ���ڿ�: %s\n", ps);
//	strcpy(ps, str);	// ���ڿ� ����
//	printf("heap ���� ���ڿ�: %s\n", ps);	// ���� �޸� ��ȯ
//
//	free(ps);
//	return 0;
//}