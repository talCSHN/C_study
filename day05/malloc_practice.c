#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* str[5];
	//char* ps;
	printf("���ڿ��� �Է��ϼ���\n");
	char inputStr[100];
	for (int i = 0; i < 5; i++) {
		scanf_s("%s", inputStr, 100);
		str[i] = (char*)(malloc(strlen(inputStr) + 1));;
		if (str[i] == NULL) {
			exit(1);
		}
		strcpy(str[i], inputStr);
	}
	printf("str : ");
	for (int i = 0; i < 5; i++) {
		printf("%s ", str[i]);
	}
	////gets(str);

	//ps = (char*)(malloc(strlen(str[0]) + 1));	// �Էµ� ���ڿ��� ������ ������ heap���κ��� �Ҵ� ����
	//if (ps == NULL) {
	//	exit(1);
	//}
	//printf("�Է��� ���ڿ�: %s\n", ps);
	//strcpy(ps, str);	// ���ڿ� ����
	//printf("heap ���� ���ڿ�: %s\n", ps);	// ���� �޸� ��ȯ
	for (int i = 0; i < 5; i++) {
		free(str[i]);
	}
	return 0;
}