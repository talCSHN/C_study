//#include <stdio.h>
//
//int main()
//{
//	/*int arr[] = { 1,2,3 };
//
//	printf("�迭�� ��ü ũ��: %d\n", sizeof(arr));
//	printf("�迭 �� �� ���� ũ��: %d\n", sizeof(arr[0]));
//	printf("�迭�� ���� ����: %d\n", sizeof(arr)/sizeof(arr[0]));
//	printf("�迭 �̸�: %p\n", arr);
//	printf("�迭�� ù ��° �� �ּ�: %p\n", &arr[0]);
//	printf("�迭�� �� ��° �� �ּ�: %p\n", &arr[1]);
//	printf("�迭�� �� ��° �� �ּ�: %p\n", arr + 1);*/
//
//	int score;
//	int arr2[5];
//	int count = sizeof(arr2) / sizeof(arr2[0]);
//	printf("�л� 5�� ���� �Է�\n");
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &score);
//		arr2[i] = score;
//		printf("%d�� �л� ����: %d\t", i+1, arr2[i]);
//	}
//	
//	int sum = 0;
//	for (int j = 0; j < 5; j++) {
//		sum += arr2[j];
//	}
//	double avgScore = sum / count;
//	printf("�л��� ��� ����: %.2lf", avgScore);
//
//
//	return 0;
//}