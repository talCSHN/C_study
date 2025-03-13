//#include <stdio.h>
//
//int main()
//{
//
//	char str[100] = "banana";
//	//char str2[5] = "apple";	// null 크기 저장할 공간 부족. char 배열 저장시 글자수 + 1 만큼 방이 필요
//	char str2[6] = "apple";	// 크기 6으로 해야함
//	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e'};
//	char str4[4];
//	str4[0] = 'a';
//	str4[1] = 'b';
//	str4[2] = 'c';
//	str4[3] = NULL;
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//	printf("str3: %s\n", str3);
//	printf("str3[6]: %s\n", str3[6]);
//	printf("str4: %s\n", str4);
//	printf("str 나머지 방: %s\n", str[10]);
//
//	//str = str2; // 안됨
//	strcpy(str, str2); // strcpy함수 써야함
//	printf("str: %s\n", str);
//	printf("str: %d\n", sizeof(str) / sizeof(str[0]));	// 결과 : 100
//
//	strcpy(str, "dog");
//	printf("str: %s\n", str);
//
//	str[0] = 'D';
//	printf("str: %s\n", str);
//
//	return 0;
//}