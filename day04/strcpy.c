///* strcpy - ���ڿ� ���� �Լ� */
////#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////#include <string.h>
//
//int main()
//{
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "apple";
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//
//	strcpy(str, str2);			// strcpy(����, ����)
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//
//	strcpy(str, "banana");
//	printf("str: %s\n", str);
//
//	strcpy(str, ps);
//	printf("str: %s\n", str);
//
//	//strcpy(ps, str2);	// �ȵ�
//	//printf("str: %s\n", ps);
//
//	//printf("%p", *ps);
//
//	strncpy(str, "abcd", 3);				// ���� �ּҺ��� ������ ���ڰ��� ���� ����
//	printf("strncpy result: %s\n", str);
//
//	return 0;
//}