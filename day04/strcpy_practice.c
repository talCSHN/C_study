///* strcpy - 문자열 복사 함수 */
////#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////#include <string.h>
//
//void myStrCpy(char*, char*);
//
//int main()
//{
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	//char* ps = "apple";
//
//	//printf("str: %s\n", str);
//	//printf("str2: %s\n", str2);
//
//	//strcpy(str, str2);			// strcpy(복사, 원본)
//	//printf("str: %s\n", str);
//	//printf("str2: %s\n", str2);
//
//	//strcpy(str, "banana");
//	//printf("str: %s\n", str);
//
//	//strcpy(str, ps);
//	//printf("str: %s\n", str);
//	char arr[100];
//	char arr2[100];
//	printf("첫번째 배열 입력\n");
//	scanf_s("%s", arr, 100);
//	printf("두번째 배열 입력\n");
//	scanf_s("%s", arr2, 100);
//	myStrCpy(arr, arr2);
//
//	return 0;
//}
//void myStrCpy(char* origin, char* toCpy) {
//
//	strcpy(origin, toCpy);
//	printf("결과값 : ");
//	for (int i = 0; i < 3; i++) {
//		printf("%c", origin[i]);
//	}
//
//}