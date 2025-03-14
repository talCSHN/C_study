//#include <stdio.h>
//void myStrInput(char*, int);
//
//int main()
//{
//
//	char str[100];
//	int size = 100;
//	myStrInput(str, size);
//	printf("input String: %s\n", str);
//
//	return 0;
//}
//
//void myStrInput(char* str, int size) {
//
//	int i = 0;
//	while (1) {
//		str[i] = getchar();
//		//putchar(str[i]);
//		if (str[i] == '\n' || i >= (size - 1)) {
//			break;
//		}
//		i++;
//	}
//	str[i] = '\0';
//}