#include <stdio.h>

void makeSmall(char);
void makeCapital(char);

int main()
{
	char ch;
	printf("��ҹ��� ��ȯ ���α׷�\n");
	while (1) {
		printf("�Է� �� : ");
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
	printf("��� �� : %c\n", ch2);
}

void makeSmall(char ch1) {
	char ch2 = ch1 + 32;
	printf("��� �� : %c\n", ch2);
}