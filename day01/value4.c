#include <stdio.h>

int main()
{
	char str[10] = "banana";	// ���� Ÿ�� �迭 ����

	printf("%s\n", str);
	printf("str[0]: %c\n", str[0]);
	printf("str[1]: %c\n", str[1]);
	printf("str[5]: %c\n", str[5]);
	printf("str[6]: %c\n", str[6]);
	//printf("str[6]: %s\n", str[6]);		// ���ڿ� ������ null���ڰ� ��

	//char str2[5] = "apple";				// apple + null�� �� ������ ������
	//printf("str2: %s", str2);

	char str2[6] = "apple";				// ���ڿ����� + 1 �������
	printf("str2: %s\n", str2);
	str2[0] = 'A';
	printf("str2: %s\n", str2);

	//str = str2; // �ȵ�
	printf("str2: %s\n", str2);

	return 0;
}