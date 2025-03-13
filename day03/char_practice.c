#include <stdio.h>

void makeSmall(char);
void makeCapital(char);

int main()
{
	char ch;
	printf("대소문자 변환 프로그램\n");
	while (1) {
		printf("입력 값 : ");
		scanf_s(" %c", &ch, 1);
		if ((ch >= 'A') && (ch <= 'Z')) {
			makeSmall(ch);
		}
		else if ((ch >= 'a') && (ch <= 'z')) {
			makeCapital(ch);
		}
		else {
			break;
		}
	}

	return 0;
}

void makeCapital(char ch1) {
	char ch2 = ch1 - 32;
	printf("출력 값 : %c\n", ch2);
}

void makeSmall(char ch1) {
	char ch2 = ch1 + 32;
	printf("출력 값 : %c\n", ch2);
}