#include <stdio.h>

int main()
{
	char str[10] = "banana";	// 문자 타입 배열 선언

	printf("%s\n", str);
	printf("str[0]: %c\n", str[0]);
	printf("str[1]: %c\n", str[1]);
	printf("str[5]: %c\n", str[5]);
	printf("str[6]: %c\n", str[6]);
	//printf("str[6]: %s\n", str[6]);		// 문자열 끝에는 null문자가 옴

	//char str2[5] = "apple";				// apple + null이 들어갈 공간이 부족함
	//printf("str2: %s", str2);

	char str2[6] = "apple";				// 문자열갯수 + 1 해줘야함
	printf("str2: %s\n", str2);
	str2[0] = 'A';
	printf("str2: %s\n", str2);

	//str = str2; // 안됨
	printf("str2: %s\n", str2);

	return 0;
}